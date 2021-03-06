// -*- Mode: C++; tab-width: 2; -*-
// vi: set ts=2:
//
// $Id: regularExpression.C,v 1.2 2003-08-26 09:17:45 oliver Exp $ 

#include <BALL/DATATYPE/regularExpression.h>

using std::endl;
using std::istream;
using std::ostream;

namespace BALL 
{

	const String RegularExpression::ALPHA("^[:alpha:]$"); // "[A-Za-z]+"
	const String RegularExpression::ALPHANUMERIC("^[:alnum:]$"); // "[0-9A-Za-z]+"
	const String RegularExpression::REAL("^-?(([0-9]+\\.[0-9]*)|([0-9]+)|(\\.[0-9]+))([eE][---+]?[0-9]+)?$");
	const String RegularExpression::IDENTIFIER("^[A-Za-z_][A-Za-z0-9_]*$");
	const String RegularExpression::INTEGER("^-?[:digit:]$"); // "-?[0-9]+"
	const String RegularExpression::HEXADECIMAL_INTEGER("^-?(0x|0X|)[:xdigit:]$");
	const String RegularExpression::LOWERCASE("^[:lower:]$"); // "[a-z]+"
	const String RegularExpression::NON_ALPHA("^[^A-Za-z]+$");
	const String RegularExpression::NON_ALPHANUMERIC("^[^0-9A-Za-z]+$");
	const String RegularExpression::NON_NUMERIC("^[^0-9]+$");
	const String RegularExpression::NON_WHITESPACE("^[^ \n\t\r\f\v]+$");
	const String RegularExpression::UPPERCASE("^[:upper:]$"); // "[A-Z]+"
	const String RegularExpression::WHITESPACE("^[ \n\t\r\f\v]+$");


	RegularExpression::RegularExpression() throw()
		:	pattern_(BALL_REGULAR_EXPRESSION_DEFAULT_PATTERN),
			valid_pattern_(false)
	{
		compilePattern_();
	}

	RegularExpression::RegularExpression 
		(const RegularExpression& regular_expression)throw()
		:	pattern_(regular_expression.pattern_),
			valid_pattern_(false)
	{
		compilePattern_();
	}

	RegularExpression::RegularExpression(const String& pattern, bool wildcard_pattern) throw()
		:	pattern_(pattern),
			valid_pattern_(false)
	{
		if (wildcard_pattern == true)
		{
			toExtendedRegularExpression_();
		}

		compilePattern_();
	}

	RegularExpression::~RegularExpression() throw()
	{
		regfree(&regex_);
	}

	bool RegularExpression::match(const char* text, const char* pattern,
															  int compile_flags, int execute_flags)
		 throw(Exception::NullPointer)
	{
		if ((text == 0) || (pattern == 0))
		{
			throw Exception::NullPointer(__FILE__, __LINE__);
		}
			
		regex_t regex;

		if (regcomp(&regex, pattern, compile_flags) != 0)
		{
			return false;
		}

		int status = regexec(&regex, text, (size_t)0, 0, execute_flags);
		regfree(&regex);
		return (status == 0);
	}

	bool RegularExpression::match(const String& text, Index from, int execute_flags) const
		 throw(Exception::NullPointer, Exception::IndexUnderflow, Exception::IndexOverflow)
	{
		if (valid_pattern_ == false)
		{
			return false;
		}

		if (from < 0)
		{
			throw Exception::IndexUnderflow(__FILE__, __LINE__, from, 0);
		}

		if (from > (Index)text.size())
		{
			throw Exception::IndexOverflow(__FILE__, __LINE__, from, (Size)text.size());
		}

		return (regexec(&regex_, text.c_str() + from, (size_t)0, 0, execute_flags) == 0);
	}

	bool RegularExpression::match(const Substring& text, Index from, int execute_flags) const 
		throw(Substring::InvalidSubstring, Exception::IndexUnderflow, Exception::IndexOverflow)
	{
		if (valid_pattern_ == false)
		{
			return false;
		}

		if (!text.isValid())
		{
			throw Substring::InvalidSubstring(__FILE__, __LINE__);
		}

		if (from < 0)
		{
			throw Exception::IndexUnderflow(__FILE__, __LINE__, from, 0);
		}

		if (from > (Index)text.size())
		{
			throw Exception::IndexOverflow(__FILE__, __LINE__, from, text.size());
		}

		char* end_of_substring = (char *)(text.c_str() + text.size());
		char c = *end_of_substring;
		*end_of_substring = '\0';
		int status = regexec(&regex_, text.c_str() + from, (size_t)0, 0, execute_flags);
		*end_of_substring = c;

		return (status == 0);
	}

	bool RegularExpression::match(const char* text, int execute_flags) const
		throw(Exception::NullPointer)
	{
		if (valid_pattern_ == false)
		{
			return false;
		}

		if (text == 0)
		{
			throw Exception::NullPointer(__FILE__, __LINE__);
		}

		return (regexec(&regex_, text, (size_t)0, 0, execute_flags) == 0);
	}

	bool RegularExpression::find(const String& text, Substring& found,
															 Index from, int execute_flags) 
			const throw(Exception::IndexUnderflow, Exception::IndexOverflow)
	{
		if ((valid_pattern_ == false) || (text.size() == 0))
		{
			return false;
		}
		if (from < 0)
		{
			throw Exception::IndexUnderflow(__FILE__, __LINE__, from, 0);
		}
		if (from >= (Index)text.size())
		{
			throw Exception::IndexOverflow(__FILE__, __LINE__, from, (Size)text.size());
		}

		regmatch_t regmatch[20];

		if (regexec(&regex_, text.c_str() + from, (size_t)20, regmatch, execute_flags) == 0)
		{
			found.bind(text, from + (Index)regmatch[0].rm_so, 
								 (Index)(regmatch[0].rm_eo - (Index)regmatch[0].rm_so));

			return true;
		}

		found.unbind();
		return false;
	}

	bool RegularExpression::find(const String& text, vector<Substring>& subexpressions,
															 Index from, int execute_flags) const
				throw(Exception::IndexUnderflow, Exception::IndexOverflow)
	{
		if (valid_pattern_ == false)
		{
			return false;
		}
		if (from < 0)
		{
			throw Exception::IndexUnderflow(__FILE__, __LINE__, from, 0);
		}
		if (from >= (Index)text.size())
		{
			throw Exception::IndexOverflow(__FILE__, __LINE__, from, (Size)text.size());
		}

		Size number_of_subexpressions = (Size)regex_.re_nsub + 1;
		subexpressions.resize(number_of_subexpressions);

		regmatch_t* regmatch_ptr = new regmatch_t[number_of_subexpressions];

		if (regexec(&regex_, text.c_str() + from, 
								(size_t)number_of_subexpressions, regmatch_ptr, execute_flags) == 0)
		{
			for (Index index = 0; index < (Index)number_of_subexpressions; ++index)
			{
				subexpressions[index].bind(text, from + (Index)regmatch_ptr[index].rm_so, 
																	 (Index)(regmatch_ptr[index].rm_eo - (Index)regmatch_ptr[index].rm_so));
			}

			delete [] regmatch_ptr;			
			return true;
		}

		delete [] regmatch_ptr;
		return false;
	}

	void RegularExpression::dump(ostream& s, Size depth) const throw()
	{
		BALL_DUMP_STREAM_PREFIX(s);

		BALL_DUMP_DEPTH(s, depth);

		BALL_DUMP_DEPTH(s, depth);
		s << "  pattern: " << pattern_ << endl;

		BALL_DUMP_DEPTH(s, depth);
		s << "  is valid: " << valid_pattern_ << endl;

		BALL_DUMP_DEPTH(s, depth);
		s << "  compiled subexpressions: " << countSubexpressions() << endl;

		BALL_DUMP_STREAM_SUFFIX(s);
	}

	ostream& operator << (ostream& s, const RegularExpression& regular_expression) throw()
	{
		s << regular_expression.pattern_ << ' ';
		return s;
	}

	istream& operator >> (istream& s, RegularExpression& regular_expression) throw()
	{
		String pattern;
		s >> pattern;
		regular_expression.set(pattern);
		return s;
	}

	void RegularExpression::compilePattern_() throw()
	{
		valid_pattern_ = !::regcomp(&regex_, pattern_.c_str(), REG_EXTENDED);
	}

	void RegularExpression::toExtendedRegularExpression_() throw()
	{
		const char* pattern = pattern_.c_str();
		String regexp;

		for (; *pattern != '\0'; ++pattern) 
		{
			switch(*pattern)
			{
				case '*': regexp += ".*";  break;
				case '?': regexp += '.';   break;
				case '.': regexp += "\\."; break;
				default:  regexp += *pattern;
			}
		}

		regexp.swap(pattern_);
	}

#	ifdef BALL_NO_INLINE_FUNCTIONS
#		include <BALL/DATATYPE/regularExpression.iC>
#	endif

} // namespace BALL
