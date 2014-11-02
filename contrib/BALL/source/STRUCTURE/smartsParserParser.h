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
     TK_ATOM = 258,
     TK_ORG_SUBSET_ATOM = 259,
     TK_HYDROGEN_EXPLICIT = 260,
     TK_HYDROGEN_IMPLICIT = 261,
     TK_RECURSIVE = 262,
     TK_AROMATIC_ATOM = 263,
     TK_ALIPHATIC_ATOM = 264,
     TK_ATOM_RING_SIZE = 265,
     TK_ATOM_NUM_RINGS = 266,
     TK_ATOM_VALENCE = 267,
     TK_ATOM_CONNECTED = 268,
     TK_ATOM_RING_CONNECTED = 269,
     TK_ATOM_DEGREE = 270,
     TK_ANY_ATOM = 271,
     TK_CHIRAL_CLASS_TH = 272,
     TK_CHIRAL_CLASS_AL = 273,
     TK_CHIRAL_CLASS_SP = 274,
     TK_CHIRAL_CLASS_TB = 275,
     TK_CHIRAL_CLASS_OH = 276,
     TK_DIGIT = 277,
     TK_ONE_TWO = 278
   };
#endif
/* Tokens.  */
#define TK_ATOM 258
#define TK_ORG_SUBSET_ATOM 259
#define TK_HYDROGEN_EXPLICIT 260
#define TK_HYDROGEN_IMPLICIT 261
#define TK_RECURSIVE 262
#define TK_AROMATIC_ATOM 263
#define TK_ALIPHATIC_ATOM 264
#define TK_ATOM_RING_SIZE 265
#define TK_ATOM_NUM_RINGS 266
#define TK_ATOM_VALENCE 267
#define TK_ATOM_CONNECTED 268
#define TK_ATOM_RING_CONNECTED 269
#define TK_ATOM_DEGREE 270
#define TK_ANY_ATOM 271
#define TK_CHIRAL_CLASS_TH 272
#define TK_CHIRAL_CLASS_AL 273
#define TK_CHIRAL_CLASS_SP 274
#define TK_CHIRAL_CLASS_TB 275
#define TK_CHIRAL_CLASS_OH 276
#define TK_DIGIT 277
#define TK_ONE_TWO 278




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "smartsParserParser.y"
{
	char*														text;
	Index														number;
	SmartsParser::SPAtom*						atom;
	SmartsParser::SPNode*						node;
	SmartsParser::SPEdge*						edge;
	SmartsParser::SPBond*						sp_bond;
	SmartsParser::SPAtom::Property* 	property;
}
/* Line 1529 of yacc.c.  */
#line 105 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE SmartsParserlval;

