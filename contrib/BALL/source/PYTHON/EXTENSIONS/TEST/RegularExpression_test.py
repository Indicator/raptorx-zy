#!/usr/bin/env /opt/bin/python2.1
from ClassTest import *

START_TEST("RegularExpression", "$Id: RegularExpression_test.py,v 1.4 2005-12-23 17:03:02 amoll Exp $")

CHECK('RegularExpression()')
re = RegularExpression()
RESULT()

CHECK('RegularExpression(const String& pattern, bool wildcard_pattern = false)')
re = RegularExpression("abc")
TEST_EQUAL(re.getPattern(), "abc")
RESULT()

re1 = RegularExpression("abc")
re2 = RegularExpression("abc")

CHECK('RegularExpression(const RegularExpression& regular_expression, bool deep = true)')
re = RegularExpression(re1)
TEST_NOT_EQUAL(re is None, true)
if not re is None:
	TEST_EQUAL(re.getPattern(), "abc")
RESULT()

CHECK('clear()')
re1.clear()
TEST_EQUAL(re1.getPattern(), "")
RESULT()

CHECK('destroy()')
re2.clear()
TEST_EQUAL(re2.getPattern(), "")
RESULT()

CHECK('RegularExpression::set(const String& pattern, bool wildcard_pattern = false)')
re1.set("abc*d", true)
TEST_EQUAL(re1.getPattern(), "abc.*d")
re1.set("abc", true)
TEST_EQUAL(re1.getPattern(), "abc")
RESULT()

CHECK('RegularExpression::set(const RegularExpression& regular_expression, bool deep = true)')
re2.set(re1)
TEST_EQUAL(re2.getPattern(), "abc")
RESULT()

CHECK('RegularExpression::get(RegularExpression& regular_expression, bool deep = true) const')
re2.clear()
re1.get(re2)
TEST_EQUAL(re2.getPattern(), "abc")
RESULT()

CHECK('RegularExpression::getPattern() const')
TEST_EQUAL(re2.getPattern(), "abc");
RESULT()

CHECK('RegularExpression::countSubexpressions() const')
TEST_EQUAL(re2.countSubexpressions(), 0)
TEST_EQUAL(re2.isValid(), true)
re2.set("([A-Z]+[0-9]+).*([0-9])")
TEST_EQUAL(re2.isValid(), true)
TEST_EQUAL(re2.countSubexpressions(), 2)
RESULT()

CHECK('RegularExpression::match(const char* text, const char* pattern, int compile_flags = 0 | REG_EXTENDED | REG_NOSUB, int execute_flags = 0)')
re = RegularExpression()
TEST_EQUAL(re.match("abbcbbd", ".*bd"), true)
TEST_EQUAL(re.match("abbcbbd", "bd"), true)
TEST_EQUAL(re.match("abbcbbd", "b.a"), false)
TEST_EQUAL(re.match("abbcbbd", "a*d"), true)
TEST_EQUAL(re.match("abbcbbd", "a..d"), false)
TEST_EQUAL(re.match("abbcbbd", "x"), false)
TEST_EQUAL(re.match("abbcbbd", "a[bc]+d"), true)
TEST_EQUAL(re.match("abbcbbd", "a[bc][bc]d"), false)
TEST_EQUAL(re.match("abbcbbd", "a[b]+d"), false)
TEST_EQUAL(re.match("abbcbbd", "a[BC]+d"), false)
RESULT()

CHECK('RegularExpression::match(const String& text, Index from = 0, int execute_flags = 0 ) const')
re2.set("a[bc]+d")
s = String("abbcbbd")
TEST_EQUAL(re2.isValid(), true)
TEST_EQUAL(re2.match(s, 1, 0), false)
TEST_EQUAL(re2.match(s, 0, 0), true)
TEST_EQUAL(re2.match(s, 0), true)
TEST_EQUAL(re2.match(s, 1), false)
TEST_EQUAL(re2.match(s), true)
re2.set(".*bd")
TEST_EQUAL(re2.isValid(), true)
TEST_EQUAL(re2.match(s), true)
RESULT()

CHECK('RegularExpression::match(const Substring& text, Index from = 0, int execute_flags = 0) const')
re2.set("a[bc]+d")
s = String("abbcbbd")
ss = Substring()
ss.bind(s)
TEST_EQUAL(re2.match(ss), true)
TEST_EQUAL(re2.match(ss, 1, 0), false)
RESULT()

CHECK('RegularExpression::match(const char* text, int execute_flags = 0) const')
TEST_EQUAL(re2.match("abbcbbd"), true)
RESULT()

CHECK('RegularExpression::find(const String& text, Substring& found, Index from = 0, int execute_flags = 0) const')
sub = Substring()
text = String("1234ABC123")
re = RegularExpression("[A-Z]+")
result = re.find(text, sub)
TEST_EQUAL(result, true)
TEST_EQUAL(sub.isBound(), true)
TEST_EQUAL(sub.size(), 3)
TEST_EQUAL(sub.getFirstIndex(), 4)
sub.set("")
TEST_EQUAL(text, "1234123")
RESULT()

CHECK('RegularExpression::isEmpty() const')
re2.set("abc")
TEST_EQUAL(re2.isEmpty(), false)
re2.set("")
TEST_EQUAL(re2.isEmpty(), true)
RESULT()

CHECK('RegularExpression::bool operator == (const RegularExpression& regular_expression) const')
re2.set("abc")
re1.set("abc")
TEST_EQUAL(re2 == re1, true)
re1.set("")
TEST_EQUAL(re2 == re1, false)
RESULT()

CHECK('RegularExpression::bool operator != (const RegularExpression& regular_expression) const')
TEST_EQUAL(re2 != re1, true)
re1.set("abc")
TEST_EQUAL(re2 != re1, false)
RESULT()

CHECK('RegularExpression::bool operator < (const RegularExpression& regular_expression) const')
TEST_EQUAL(re2 < re1, false)
re2.set("abb")
TEST_EQUAL(re2 < re1, true)
RESULT()

CHECK('RegularExpression::bool operator <= (const RegularExpression& regular_expression) const')
TEST_EQUAL(re2 <= re1, true)
re2.set(re1)
TEST_EQUAL(re2 <= re1, true)
re2.set("abd")
TEST_EQUAL(re2 <= re1, false)
RESULT()

CHECK('RegularExpression::bool operator >= (const RegularExpression& regular_expression) const')
TEST_EQUAL(re2 >= re1, true)
re2.set(re1)
TEST_EQUAL(re2 >= re1, true)
re2.set("abb")
TEST_EQUAL(re2 >= re1, false)
RESULT()

CHECK('RegularExpression::bool operator > (const RegularExpression& regular_expression) const')
TEST_EQUAL(re2 > re1, false)
re2.set("abd")
TEST_EQUAL(re2 > re1, true)
RESULT()

CHECK('RegularExpression::isValid() const')
re2.set("abc")
TEST_EQUAL(re2.isValid(), true)
RESULT()

END_TEST()
