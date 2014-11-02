/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_COMMENT = 258,
     TK_LINE = 259,
     TK_BLOCK_START = 260,
     TK_DATA = 261,
     TK_ATOM = 262,
     TK_GROUP = 263,
     TK_FLOAT = 264,
     TK_BOND = 265,
     TK_BLOCK_END = 266,
     TK_DATA_BLOCK_START = 267,
     TK_ZMAT_BLOCK_START = 268,
     TK_VEC_BLOCK_START = 269,
     TK_EQUALS = 270
   };
#endif
/* Tokens.  */
#define TK_COMMENT 258
#define TK_LINE 259
#define TK_BLOCK_START 260
#define TK_DATA 261
#define TK_ATOM 262
#define TK_GROUP 263
#define TK_FLOAT 264
#define TK_BOND 265
#define TK_BLOCK_END 266
#define TK_DATA_BLOCK_START 267
#define TK_ZMAT_BLOCK_START 268
#define TK_VEC_BLOCK_START 269
#define TK_EQUALS 270




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "GAMESSDatParserParser.y"
{
	char*		text;
	float		value;
}
/* Line 1529 of yacc.c.  */
#line 84 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE GAMESSDatParserlval;

