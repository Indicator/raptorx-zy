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
     TK_LINE = 258,
     TK_OPTION = 259,
     TK_EIGEN_LINE = 260,
     TK_ATOM = 261,
     TK_FLOAT = 262,
     TK_BOND = 263,
     TK_OTHER = 264,
     TK_CHARGE = 265,
     TK_POPULATION = 266,
     TK_COEFFICIENTS = 267,
     TK_TITLE = 268,
     TK_COORDS_BOHR = 269,
     TK_COORDS_ANGSTROM = 270,
     TK_END_MOL = 271,
     TK_ZMAT_START = 272,
     TK_ZMAT_END = 273,
     TK_CHARGE_START = 274,
     TK_CHARGE_END = 275,
     TK_POPULATION_START = 276,
     TK_POPULATION_END = 277,
     TK_EIGEN_START = 278,
     TK_EIGEN_END = 279,
     TK_BASIS_OPTIONS_START = 280,
     TK_BASIS_OPTIONS_END = 281,
     TK_BOND_START = 282,
     TK_BOND_END = 283
   };
#endif
/* Tokens.  */
#define TK_LINE 258
#define TK_OPTION 259
#define TK_EIGEN_LINE 260
#define TK_ATOM 261
#define TK_FLOAT 262
#define TK_BOND 263
#define TK_OTHER 264
#define TK_CHARGE 265
#define TK_POPULATION 266
#define TK_COEFFICIENTS 267
#define TK_TITLE 268
#define TK_COORDS_BOHR 269
#define TK_COORDS_ANGSTROM 270
#define TK_END_MOL 271
#define TK_ZMAT_START 272
#define TK_ZMAT_END 273
#define TK_CHARGE_START 274
#define TK_CHARGE_END 275
#define TK_POPULATION_START 276
#define TK_POPULATION_END 277
#define TK_EIGEN_START 278
#define TK_EIGEN_END 279
#define TK_BASIS_OPTIONS_START 280
#define TK_BASIS_OPTIONS_END 281
#define TK_BOND_START 282
#define TK_BOND_END 283




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "GAMESSLogParserParser.y"
{
	char*		text;
	float		value;
	int			number;
}
/* Line 1529 of yacc.c.  */
#line 111 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE GAMESSLogParserlval;

