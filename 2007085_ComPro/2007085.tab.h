
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     INT_LITERAL = 258,
     FLOAT_LITERAL = 259,
     STRING_LITERAL = 260,
     IDENTIFIER = 261,
     INTEGER = 262,
     REAL = 263,
     CHARACTER = 264,
     TEXT = 265,
     MAINBLOCK = 266,
     CONDITION = 267,
     OTHERWISE = 268,
     LOOP = 269,
     ITERATE = 270,
     EXIT = 271,
     ADD = 272,
     SUBTRACT = 273,
     MULTIPLY = 274,
     DIVIDE = 275,
     ASSIGNMENT = 276,
     EQUAL = 277,
     NOT_EQUAL = 278,
     LESS_THAN = 279,
     GREATER_THAN = 280,
     LESS_EQUAL = 281,
     GREATER_EQUAL = 282,
     OPEN_BLOCK = 283,
     CLOSE_BLOCK = 284,
     OPEN_PAREN = 285,
     CLOSE_PAREN = 286,
     END_STMT = 287,
     SEPARATOR = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 10 "2007085.y"

    int intVal;
    float floatVal;
    char *stringVal;
    char *idVal;  // Added idVal for IDENTIFIER



/* Line 1676 of yacc.c  */
#line 94 "2007085.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


