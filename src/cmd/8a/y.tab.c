/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LTYPE0 = 258,
     LTYPE1 = 259,
     LTYPE2 = 260,
     LTYPE3 = 261,
     LTYPE4 = 262,
     LTYPEC = 263,
     LTYPED = 264,
     LTYPEN = 265,
     LTYPER = 266,
     LTYPET = 267,
     LTYPES = 268,
     LTYPEM = 269,
     LTYPEI = 270,
     LTYPEG = 271,
     LCONST = 272,
     LFP = 273,
     LPC = 274,
     LSB = 275,
     LBREG = 276,
     LLREG = 277,
     LSREG = 278,
     LFREG = 279,
     LFCONST = 280,
     LSCONST = 281,
     LSP = 282,
     LNAME = 283,
     LLAB = 284,
     LVAR = 285
   };
#endif
/* Tokens.  */
#define LTYPE0 258
#define LTYPE1 259
#define LTYPE2 260
#define LTYPE3 261
#define LTYPE4 262
#define LTYPEC 263
#define LTYPED 264
#define LTYPEN 265
#define LTYPER 266
#define LTYPET 267
#define LTYPES 268
#define LTYPEM 269
#define LTYPEI 270
#define LTYPEG 271
#define LCONST 272
#define LFP 273
#define LPC 274
#define LSB 275
#define LBREG 276
#define LLREG 277
#define LSREG 278
#define LFREG 279
#define LFCONST 280
#define LSCONST 281
#define LSP 282
#define LNAME 283
#define LLAB 284
#define LVAR 285




/* Copy the first part of user declarations.  */
#line 31 "a.y"

#include <u.h>
#include <stdio.h>	/* if we don't, bison will, and a.h re-#defines getc */
#include <libc.h>
#include "a.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 37 "a.y"
{
	Sym	*sym;
	int32	lval;
	struct {
		int32 v1;
		int32 v2;
	} con2;
	double	dval;
	char	sval[8];
	Gen	gen;
	Gen2	gen2;
}
/* Line 193 of yacc.c.  */
#line 176 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 189 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  247

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    47,    12,     5,     2,
      45,    46,    10,     8,    44,     9,     2,    11,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,    42,
       6,    43,     7,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     2,    48,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    10,    15,    16,    21,
      23,    26,    29,    33,    37,    40,    43,    46,    49,    52,
      55,    58,    61,    64,    67,    70,    73,    76,    79,    80,
      82,    86,    90,    93,    95,    98,   100,   103,   105,   109,
     115,   119,   125,   128,   130,   133,   135,   137,   141,   147,
     151,   157,   160,   162,   166,   170,   176,   178,   180,   182,
     184,   187,   190,   192,   194,   196,   198,   200,   205,   208,
     211,   213,   215,   217,   219,   221,   224,   227,   230,   233,
     238,   244,   248,   251,   253,   256,   260,   265,   267,   269,
     271,   276,   281,   288,   298,   302,   306,   311,   317,   326,
     328,   335,   341,   349,   350,   353,   356,   358,   360,   362,
     364,   366,   369,   372,   375,   379,   381,   385,   389,   393,
     397,   401,   406,   411,   415,   419
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,
      39,    41,    53,    52,    -1,    -1,    38,    41,    54,    52,
      -1,    42,    -1,    55,    42,    -1,     1,    42,    -1,    38,
      43,    85,    -1,    40,    43,    85,    -1,    13,    56,    -1,
      14,    60,    -1,    15,    59,    -1,    16,    57,    -1,    17,
      58,    -1,    21,    61,    -1,    19,    62,    -1,    22,    63,
      -1,    18,    64,    -1,    20,    65,    -1,    23,    66,    -1,
      24,    67,    -1,    25,    68,    -1,    26,    69,    -1,    -1,
      44,    -1,    72,    44,    70,    -1,    70,    44,    72,    -1,
      72,    44,    -1,    72,    -1,    44,    70,    -1,    70,    -1,
      44,    73,    -1,    73,    -1,    75,    44,    73,    -1,    81,
      11,    84,    44,    75,    -1,    78,    44,    76,    -1,    78,
      44,    84,    44,    76,    -1,    44,    71,    -1,    71,    -1,
      10,    81,    -1,    56,    -1,    60,    -1,    72,    44,    70,
      -1,    72,    44,    70,    41,    32,    -1,    72,    44,    70,
      -1,    72,    44,    70,    41,    33,    -1,    72,    44,    -1,
      72,    -1,    72,    44,    70,    -1,    78,    44,    75,    -1,
      78,    44,    84,    44,    75,    -1,    74,    -1,    78,    -1,
      73,    -1,    80,    -1,    10,    74,    -1,    10,    79,    -1,
      74,    -1,    79,    -1,    75,    -1,    70,    -1,    75,    -1,
      84,    45,    29,    46,    -1,    38,    82,    -1,    39,    82,
      -1,    31,    -1,    34,    -1,    32,    -1,    37,    -1,    33,
      -1,    47,    84,    -1,    47,    81,    -1,    47,    36,    -1,
      47,    35,    -1,    47,    45,    35,    46,    -1,    47,    45,
       9,    35,    46,    -1,    47,     9,    35,    -1,    47,    77,
      -1,    27,    -1,     9,    27,    -1,    27,     9,    27,    -1,
       9,    27,     9,    27,    -1,    79,    -1,    80,    -1,    84,
      -1,    84,    45,    32,    46,    -1,    84,    45,    37,    46,
      -1,    84,    45,    32,    10,    84,    46,    -1,    84,    45,
      32,    46,    45,    32,    10,    84,    46,    -1,    45,    32,
      46,    -1,    45,    37,    46,    -1,    84,    45,    33,    46,
      -1,    45,    32,    10,    84,    46,    -1,    45,    32,    46,
      45,    32,    10,    84,    46,    -1,    81,    -1,    81,    45,
      32,    10,    84,    46,    -1,    38,    82,    45,    83,    46,
      -1,    38,     6,     7,    82,    45,    30,    46,    -1,    -1,
       8,    84,    -1,     9,    84,    -1,    30,    -1,    37,    -1,
      28,    -1,    27,    -1,    40,    -1,     9,    84,    -1,     8,
      84,    -1,    48,    84,    -1,    45,    85,    46,    -1,    84,
      -1,    85,     8,    85,    -1,    85,     9,    85,    -1,    85,
      10,    85,    -1,    85,    11,    85,    -1,    85,    12,    85,
      -1,    85,     6,     6,    85,    -1,    85,     7,     7,    85,
      -1,    85,     5,    85,    -1,    85,     4,    85,    -1,    85,
       3,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    70,    69,    77,    76,    84,    83,    89,
      90,    91,    94,    99,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   121,   125,
     132,   139,   146,   151,   158,   163,   170,   175,   180,   187,
     195,   200,   208,   213,   218,   227,   228,   231,   236,   246,
     251,   261,   266,   271,   278,   283,   291,   292,   295,   296,
     297,   301,   305,   306,   307,   310,   311,   314,   320,   329,
     338,   343,   348,   353,   358,   365,   371,   382,   388,   394,
     400,   406,   414,   423,   428,   433,   438,   445,   446,   449,
     455,   461,   467,   476,   485,   490,   495,   501,   509,   519,
     523,   532,   539,   548,   551,   555,   561,   562,   566,   569,
     570,   574,   578,   582,   586,   592,   593,   597,   601,   605,
     609,   613,   617,   621,   625,   629
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "LTYPE0", "LTYPE1", "LTYPE2", "LTYPE3",
  "LTYPE4", "LTYPEC", "LTYPED", "LTYPEN", "LTYPER", "LTYPET", "LTYPES",
  "LTYPEM", "LTYPEI", "LTYPEG", "LCONST", "LFP", "LPC", "LSB", "LBREG",
  "LLREG", "LSREG", "LFREG", "LFCONST", "LSCONST", "LSP", "LNAME", "LLAB",
  "LVAR", "':'", "';'", "'='", "','", "'('", "')'", "'$'", "'~'",
  "$accept", "prog", "@1", "line", "@2", "@3", "inst", "nonnon", "rimrem",
  "remrim", "rimnon", "nonrem", "nonrel", "spec1", "spec2", "spec3",
  "spec4", "spec5", "spec6", "spec7", "spec8", "rem", "rom", "rim", "rel",
  "reg", "imm", "imm2", "con2", "mem", "omem", "nmem", "nam", "offset",
  "pointer", "con", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   124,    94,    38,    60,    62,    43,    45,
      42,    47,    37,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    58,    59,    61,    44,    40,    41,    36,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    50,    53,    52,    54,    52,    52,
      52,    52,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      63,    63,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    73,    73,    73,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     0,     4,     0,     4,     1,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     1,
       3,     3,     2,     1,     2,     1,     2,     1,     3,     5,
       3,     5,     2,     1,     2,     1,     1,     3,     5,     3,
       5,     2,     1,     3,     3,     5,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     4,     2,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     4,
       5,     3,     2,     1,     2,     3,     4,     1,     1,     1,
       4,     4,     6,     9,     3,     3,     4,     5,     8,     1,
       6,     5,     7,     0,     2,     2,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     1,     3,     3,     3,     3,
       3,     4,     4,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     1,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     4,     0,    11,    29,    14,     0,     0,
     109,    70,    72,    74,    71,    73,   103,   110,     0,     0,
       0,    15,    35,    56,    57,    87,    88,    99,    89,     0,
      16,    65,    33,    66,    17,     0,    18,     0,     0,   103,
     103,     0,    22,    43,    58,    62,    64,    63,    59,    89,
      20,     0,    29,    45,    46,    23,   103,     0,     0,    19,
      37,     0,     0,    21,     0,    24,     0,    25,     0,    26,
      52,    27,     0,     7,     0,     5,     0,    10,   112,   111,
       0,     0,     0,     0,    34,     0,     0,   115,     0,   113,
       0,     0,     0,    78,    77,     0,    76,    75,    32,     0,
       0,    60,    61,    44,    68,    69,     0,    42,     0,     0,
      68,    36,     0,     0,     0,     0,     0,    51,     0,     0,
      12,     0,    13,   103,   104,   105,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,    81,     0,     0,    30,    31,
       0,     0,    38,     0,    40,     0,    47,    49,    53,    54,
       0,     8,     6,     0,   108,   106,   107,     0,     0,     0,
     125,   124,   123,     0,     0,   116,   117,   118,   119,   120,
       0,     0,    90,    96,    91,     0,    79,    67,     0,     0,
      83,    82,     0,     0,     0,     0,     0,   101,    97,     0,
     121,   122,     0,     0,     0,    80,    39,    84,     0,    41,
      48,    50,    55,     0,     0,   100,    92,     0,     0,    85,
     102,     0,     0,    86,    98,     0,    93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    23,   141,   139,    24,    27,    54,    56,
      50,    41,    79,    70,    83,    62,    75,    85,    87,    89,
      91,    51,    63,    52,    64,    43,    53,   174,   211,    44,
      45,    46,    47,   103,   187,    48,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int16 yypact[] =
{
     -63,    15,   -63,   154,   -17,     9,   238,   258,   258,   305,
     178,     6,   285,   343,   401,   258,   258,   258,   401,    42,
      13,    -8,   -63,   -63,    21,   -63,   -63,   -63,   451,   451,
     -63,   -63,   -63,   -63,   -63,   -63,    34,   -63,   305,   366,
     451,   -63,   -63,   -63,   -63,   -63,   -63,    19,    24,   359,
     -63,   -63,    26,   -63,   -63,    38,   -63,    43,   305,    34,
      41,   211,   -63,   -63,   -63,   -63,   -63,   -63,   -63,    53,
     -63,    92,   305,   -63,   -63,   -63,    41,   392,   451,   -63,
     -63,    60,    71,   -63,    73,   -63,    76,   -63,    82,   -63,
      83,   -63,    89,   -63,   451,   -63,   451,   -63,   -63,   -63,
     131,   451,   451,    94,   -63,     0,    97,   -63,    69,   -63,
     112,    -6,   407,   -63,   -63,   416,   -63,   -63,   -63,   305,
     258,   -63,   -63,   -63,    94,   -63,   332,   -63,   121,   451,
     -63,   -63,   392,   122,   155,   305,   305,   305,   418,   154,
     476,   154,   476,    41,   -63,   -63,     8,   451,   107,   -63,
     451,   451,   451,   151,   152,   451,   451,   451,   451,   451,
     -63,   150,     2,   115,   116,   -63,   427,   119,   -63,   -63,
     120,   137,   -63,    14,   -63,   141,   148,   156,   -63,   -63,
     157,   -63,   -63,   153,   -63,   -63,   -63,   158,   161,   176,
     102,   495,   502,   451,   451,    49,    49,   -63,   -63,   -63,
     451,   451,   168,   -63,   -63,   187,   -63,   -63,   167,   207,
     226,   -63,   189,   205,   206,   167,   210,   -63,   -63,   231,
     219,   219,   208,   209,   220,   -63,   -63,   244,   230,   -63,
     -63,   -63,   -63,   214,   451,   -63,   -63,   251,   235,   -63,
     -63,   217,   451,   -63,   -63,   218,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   -40,   -63,   -63,   -63,   256,   -63,   -63,
     -63,   261,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,    -1,   213,     5,   -11,    -3,    -9,    65,   -63,    10,
       4,    -4,    -2,   -43,   -63,   -10,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      69,    66,    80,    82,    81,    42,    68,    65,    57,    71,
     147,    42,   201,    55,    67,     2,   124,   125,    98,    99,
      86,    88,    90,   209,    84,    25,   162,   163,    92,   107,
     109,   164,   140,   130,   142,    96,   184,   104,   185,   117,
     100,   210,   101,   102,    36,   186,   148,   116,   202,   101,
     102,    69,    66,    26,    95,   121,   123,    68,    65,   157,
     158,   159,   122,    97,   110,    67,   131,    82,   107,   111,
     118,   104,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   119,    93,   107,    94,   107,   120,   190,   191,
     192,   144,   145,   195,   196,   197,   198,   199,   128,   181,
     183,   182,    99,   129,   132,   107,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   133,   134,   168,   171,
     135,   172,    82,   121,   175,   169,   136,   137,   180,   179,
     122,   220,   221,   138,   176,   177,   178,   188,   143,   146,
     107,   107,   107,   149,   161,   107,   107,   107,   107,   107,
     170,   170,   189,   162,   163,     4,    99,   193,   164,   194,
     200,   203,   204,    28,    29,   206,   207,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   208,    30,   107,   107,   212,    28,    29,    58,   213,
     222,   223,    19,    20,    21,    37,    22,   214,   216,   226,
      78,   215,   173,    40,   217,    30,   232,   218,   219,    31,
      32,    33,    34,   224,    49,    35,    59,    60,    37,    28,
      29,   126,    61,    39,   241,    49,    40,   155,   156,   157,
     158,   159,   245,   225,   227,   228,   173,   230,    30,   231,
     233,   234,    31,    32,    33,    34,    28,    29,    35,    59,
      60,    37,   237,   238,   235,   236,    39,   239,    49,    40,
     240,   242,   243,   244,   246,    30,    28,    29,    73,    31,
      32,    33,    34,    74,   127,    35,    36,   229,    37,     0,
       0,     0,    38,    39,     0,    30,    40,     0,     0,    31,
      32,    33,    34,    28,    29,    35,    36,     0,    37,     0,
       0,     0,     0,    39,     0,    49,    40,     0,     0,     0,
       0,     0,    30,    28,    29,     0,    31,    32,    33,    34,
       0,     0,    35,    36,     0,    37,     0,     0,     0,    72,
      39,     0,    30,    40,     0,     0,    31,    32,    33,    34,
      28,    29,    35,    36,     0,    37,     0,     0,     0,     0,
      39,    28,    29,    40,     0,     0,     0,     0,     0,    30,
       0,     0,     0,    31,    32,    33,    34,    28,   112,    35,
      30,     0,    37,     0,    28,    29,     0,    39,     0,     0,
      40,    76,    60,    37,     0,     0,    30,    77,    78,     0,
      49,    40,     0,    30,   113,   114,     0,    36,   105,    37,
      28,    29,     0,   106,   115,     0,    37,    40,     0,    28,
      29,    78,     0,     0,    40,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    28,   166,    28,    29,    30,     0,
      76,    60,    37,     0,    30,    28,    29,    78,     0,    36,
      40,    37,   165,    30,     0,    30,    39,    37,     0,    40,
       0,   167,    78,     0,    30,    40,    37,     0,    37,    28,
      29,    78,   205,    78,    40,    49,    40,    37,     0,     0,
       0,     0,    78,     0,     0,    40,     0,     0,    30,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
       0,    37,     0,     0,     0,     0,    78,     0,     0,    40,
     152,   153,   154,   155,   156,   157,   158,   159,   153,   154,
     155,   156,   157,   158,   159
};

static const yytype_int16 yycheck[] =
{
      10,    10,    13,    13,    13,     6,    10,    10,     9,    11,
      10,    12,    10,     8,    10,     0,    59,    60,    28,    29,
      15,    16,    17,     9,    14,    42,    32,    33,    18,    39,
      40,    37,    94,    76,    96,    43,    28,    38,    30,    49,
       6,    27,     8,     9,    38,    37,    46,    49,    46,     8,
       9,    61,    61,    44,    41,    58,    58,    61,    61,    10,
      11,    12,    58,    42,    45,    61,    77,    77,    78,    45,
      44,    72,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    44,    41,    94,    43,    96,    44,   150,   151,
     152,   101,   102,   155,   156,   157,   158,   159,    45,   139,
     143,   141,   112,    11,    44,   115,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    46,    45,    44,   119,   129,
      44,   132,   132,   126,   134,   120,    44,    44,   138,   138,
     126,   193,   194,    44,   135,   136,   137,   147,     7,    45,
     150,   151,   152,    46,    32,   155,   156,   157,   158,   159,
      29,    29,    45,    32,    33,     1,   166,     6,    37,     7,
      10,    46,    46,     8,     9,    46,    46,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    44,    27,   193,   194,    44,     8,     9,    10,    41,
     200,   201,    38,    39,    40,    40,    42,    41,    45,   208,
      45,    44,    47,    48,    46,    27,   215,    46,    32,    31,
      32,    33,    34,    45,    47,    37,    38,    39,    40,     8,
       9,    10,    44,    45,   234,    47,    48,     8,     9,    10,
      11,    12,   242,    46,    27,     9,    47,    32,    27,    33,
      30,    10,    31,    32,    33,    34,     8,     9,    37,    38,
      39,    40,    32,     9,    46,    46,    45,    27,    47,    48,
      46,    10,    27,    46,    46,    27,     8,     9,    12,    31,
      32,    33,    34,    12,    61,    37,    38,   212,    40,    -1,
      -1,    -1,    44,    45,    -1,    27,    48,    -1,    -1,    31,
      32,    33,    34,     8,     9,    37,    38,    -1,    40,    -1,
      -1,    -1,    -1,    45,    -1,    47,    48,    -1,    -1,    -1,
      -1,    -1,    27,     8,     9,    -1,    31,    32,    33,    34,
      -1,    -1,    37,    38,    -1,    40,    -1,    -1,    -1,    44,
      45,    -1,    27,    48,    -1,    -1,    31,    32,    33,    34,
       8,     9,    37,    38,    -1,    40,    -1,    -1,    -1,    -1,
      45,     8,     9,    48,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    32,    33,    34,     8,     9,    37,
      27,    -1,    40,    -1,     8,     9,    -1,    45,    -1,    -1,
      48,    38,    39,    40,    -1,    -1,    27,    44,    45,    -1,
      47,    48,    -1,    27,    35,    36,    -1,    38,    32,    40,
       8,     9,    -1,    37,    45,    -1,    40,    48,    -1,     8,
       9,    45,    -1,    -1,    48,     8,     9,    -1,    -1,    27,
      -1,    -1,    -1,    -1,     8,     9,     8,     9,    27,    -1,
      38,    39,    40,    -1,    27,     8,     9,    45,    -1,    38,
      48,    40,    35,    27,    -1,    27,    45,    40,    -1,    48,
      -1,    35,    45,    -1,    27,    48,    40,    -1,    40,     8,
       9,    45,    35,    45,    48,    47,    48,    40,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    27,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
       5,     6,     7,     8,     9,    10,    11,    12,     6,     7,
       8,     9,    10,    11,    12
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,     0,    51,     1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    38,
      39,    40,    42,    52,    55,    42,    44,    56,     8,     9,
      27,    31,    32,    33,    34,    37,    38,    40,    44,    45,
      48,    60,    70,    74,    78,    79,    80,    81,    84,    47,
      59,    70,    72,    75,    57,    72,    58,    70,    10,    38,
      39,    44,    64,    71,    73,    74,    75,    79,    80,    84,
      62,    81,    44,    56,    60,    65,    38,    44,    45,    61,
      73,    75,    84,    63,    78,    66,    72,    67,    72,    68,
      72,    69,    78,    41,    43,    41,    43,    42,    84,    84,
       6,     8,     9,    82,    70,    32,    37,    84,    85,    84,
      45,    45,     9,    35,    36,    45,    81,    84,    44,    44,
      44,    74,    79,    81,    82,    82,    10,    71,    45,    11,
      82,    73,    44,    45,    44,    44,    44,    44,    44,    54,
      85,    53,    85,     7,    84,    84,    45,    10,    46,    46,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      46,    32,    32,    33,    37,    35,     9,    35,    70,    72,
      29,    84,    73,    47,    76,    84,    70,    70,    70,    75,
      84,    52,    52,    82,    28,    30,    37,    83,    84,    45,
      85,    85,    85,     6,     7,    85,    85,    85,    85,    85,
      10,    10,    46,    46,    46,    35,    46,    46,    44,     9,
      27,    77,    44,    41,    41,    44,    45,    46,    46,    32,
      85,    85,    84,    84,    45,    46,    75,    27,     9,    76,
      32,    33,    75,    30,    10,    46,    46,    32,     9,    27,
      46,    84,    10,    27,    46,    84,    46
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 70 "a.y"
    {
		stmtline = lineno;
	}
    break;

  case 5:
#line 77 "a.y"
    {
		if((yyvsp[(1) - (2)].sym)->value != pc)
			yyerror("redeclaration of %s", (yyvsp[(1) - (2)].sym)->name);
		(yyvsp[(1) - (2)].sym)->value = pc;
	}
    break;

  case 7:
#line 84 "a.y"
    {
		(yyvsp[(1) - (2)].sym)->type = LLAB;
		(yyvsp[(1) - (2)].sym)->value = pc;
	}
    break;

  case 12:
#line 95 "a.y"
    {
		(yyvsp[(1) - (3)].sym)->type = LVAR;
		(yyvsp[(1) - (3)].sym)->value = (yyvsp[(3) - (3)].lval);
	}
    break;

  case 13:
#line 100 "a.y"
    {
		if((yyvsp[(1) - (3)].sym)->value != (yyvsp[(3) - (3)].lval))
			yyerror("redeclaration of %s", (yyvsp[(1) - (3)].sym)->name);
		(yyvsp[(1) - (3)].sym)->value = (yyvsp[(3) - (3)].lval);
	}
    break;

  case 14:
#line 105 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 15:
#line 106 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 16:
#line 107 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 17:
#line 108 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 18:
#line 109 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 19:
#line 110 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 20:
#line 111 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 21:
#line 112 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 22:
#line 113 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 23:
#line 114 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 24:
#line 115 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 25:
#line 116 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 26:
#line 117 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 27:
#line 118 "a.y"
    { outcode((yyvsp[(1) - (2)].lval), &(yyvsp[(2) - (2)].gen2)); }
    break;

  case 28:
#line 121 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = nullgen;
	}
    break;

  case 29:
#line 126 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = nullgen;
	}
    break;

  case 30:
#line 133 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 31:
#line 140 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 32:
#line 147 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (2)].gen);
		(yyval.gen2).to = nullgen;
	}
    break;

  case 33:
#line 152 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (1)].gen);
		(yyval.gen2).to = nullgen;
	}
    break;

  case 34:
#line 159 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(2) - (2)].gen);
	}
    break;

  case 35:
#line 164 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(1) - (1)].gen);
	}
    break;

  case 36:
#line 171 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(2) - (2)].gen);
	}
    break;

  case 37:
#line 176 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(1) - (1)].gen);
	}
    break;

  case 38:
#line 181 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 39:
#line 188 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (5)].gen);
		(yyval.gen2).from.scale = (yyvsp[(3) - (5)].lval);
		(yyval.gen2).to = (yyvsp[(5) - (5)].gen);
	}
    break;

  case 40:
#line 196 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 41:
#line 201 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (5)].gen);
		(yyval.gen2).from.scale = (yyvsp[(3) - (5)].lval);
		(yyval.gen2).to = (yyvsp[(5) - (5)].gen);
	}
    break;

  case 42:
#line 209 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(2) - (2)].gen);
	}
    break;

  case 43:
#line 214 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(1) - (1)].gen);
	}
    break;

  case 44:
#line 219 "a.y"
    {
		(yyval.gen2).from = nullgen;
		(yyval.gen2).to = (yyvsp[(2) - (2)].gen);
		(yyval.gen2).to.index = (yyvsp[(2) - (2)].gen).type;
		(yyval.gen2).to.type = D_INDIR+D_ADDR;
	}
    break;

  case 47:
#line 232 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 48:
#line 237 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (5)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (5)].gen);
		if((yyval.gen2).from.index != D_NONE)
			yyerror("dp shift with lhs index");
		(yyval.gen2).from.index = (yyvsp[(5) - (5)].lval);
	}
    break;

  case 49:
#line 247 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 50:
#line 252 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (5)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (5)].gen);
		if((yyval.gen2).to.index != D_NONE)
			yyerror("dp move with lhs index");
		(yyval.gen2).to.index = (yyvsp[(5) - (5)].lval);
	}
    break;

  case 51:
#line 262 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (2)].gen);
		(yyval.gen2).to = nullgen;
	}
    break;

  case 52:
#line 267 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (1)].gen);
		(yyval.gen2).to = nullgen;
	}
    break;

  case 53:
#line 272 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 54:
#line 279 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (3)].gen);
		(yyval.gen2).to = (yyvsp[(3) - (3)].gen);
	}
    break;

  case 55:
#line 284 "a.y"
    {
		(yyval.gen2).from = (yyvsp[(1) - (5)].gen);
		(yyval.gen2).from.scale = (yyvsp[(3) - (5)].lval);
		(yyval.gen2).to = (yyvsp[(5) - (5)].gen);
	}
    break;

  case 60:
#line 298 "a.y"
    {
		(yyval.gen) = (yyvsp[(2) - (2)].gen);
	}
    break;

  case 61:
#line 302 "a.y"
    {
		(yyval.gen) = (yyvsp[(2) - (2)].gen);
	}
    break;

  case 67:
#line 315 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_BRANCH;
		(yyval.gen).offset = (yyvsp[(1) - (4)].lval) + pc;
	}
    break;

  case 68:
#line 321 "a.y"
    {
		(yyval.gen) = nullgen;
		if(pass == 2)
			yyerror("undefined label: %s", (yyvsp[(1) - (2)].sym)->name);
		(yyval.gen).type = D_BRANCH;
		(yyval.gen).sym = (yyvsp[(1) - (2)].sym);
		(yyval.gen).offset = (yyvsp[(2) - (2)].lval);
	}
    break;

  case 69:
#line 330 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_BRANCH;
		(yyval.gen).sym = (yyvsp[(1) - (2)].sym);
		(yyval.gen).offset = (yyvsp[(1) - (2)].sym)->value + (yyvsp[(2) - (2)].lval);
	}
    break;

  case 70:
#line 339 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = (yyvsp[(1) - (1)].lval);
	}
    break;

  case 71:
#line 344 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = (yyvsp[(1) - (1)].lval);
	}
    break;

  case 72:
#line 349 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = (yyvsp[(1) - (1)].lval);
	}
    break;

  case 73:
#line 354 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_SP;
	}
    break;

  case 74:
#line 359 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = (yyvsp[(1) - (1)].lval);
	}
    break;

  case 75:
#line 366 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_CONST;
		(yyval.gen).offset = (yyvsp[(2) - (2)].lval);
	}
    break;

  case 76:
#line 372 "a.y"
    {
		(yyval.gen) = (yyvsp[(2) - (2)].gen);
		(yyval.gen).index = (yyvsp[(2) - (2)].gen).type;
		(yyval.gen).type = D_ADDR;
		/*
		if($2.type == D_AUTO || $2.type == D_PARAM)
			yyerror("constant cannot be automatic: %s",
				$2.sym->name);
		 */
	}
    break;

  case 77:
#line 383 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_SCONST;
		memcpy((yyval.gen).sval, (yyvsp[(2) - (2)].sval), sizeof((yyval.gen).sval));
	}
    break;

  case 78:
#line 389 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_FCONST;
		(yyval.gen).dval = (yyvsp[(2) - (2)].dval);
	}
    break;

  case 79:
#line 395 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_FCONST;
		(yyval.gen).dval = (yyvsp[(3) - (4)].dval);
	}
    break;

  case 80:
#line 401 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_FCONST;
		(yyval.gen).dval = -(yyvsp[(4) - (5)].dval);
	}
    break;

  case 81:
#line 407 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_FCONST;
		(yyval.gen).dval = -(yyvsp[(3) - (3)].dval);
	}
    break;

  case 82:
#line 415 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_CONST2;
		(yyval.gen).offset = (yyvsp[(2) - (2)].con2).v1;
		(yyval.gen).offset2 = (yyvsp[(2) - (2)].con2).v2;
	}
    break;

  case 83:
#line 424 "a.y"
    {
		(yyval.con2).v1 = (yyvsp[(1) - (1)].lval);
		(yyval.con2).v2 = 0;
	}
    break;

  case 84:
#line 429 "a.y"
    {
		(yyval.con2).v1 = -(yyvsp[(2) - (2)].lval);
		(yyval.con2).v2 = 0;
	}
    break;

  case 85:
#line 434 "a.y"
    {
		(yyval.con2).v1 = (yyvsp[(1) - (3)].lval);
		(yyval.con2).v2 = (yyvsp[(3) - (3)].lval);
	}
    break;

  case 86:
#line 439 "a.y"
    {
		(yyval.con2).v1 = -(yyvsp[(2) - (4)].lval);
		(yyval.con2).v2 = (yyvsp[(4) - (4)].lval);
	}
    break;

  case 89:
#line 450 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+D_NONE;
		(yyval.gen).offset = (yyvsp[(1) - (1)].lval);
	}
    break;

  case 90:
#line 456 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+(yyvsp[(3) - (4)].lval);
		(yyval.gen).offset = (yyvsp[(1) - (4)].lval);
	}
    break;

  case 91:
#line 462 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+D_SP;
		(yyval.gen).offset = (yyvsp[(1) - (4)].lval);
	}
    break;

  case 92:
#line 468 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+D_NONE;
		(yyval.gen).offset = (yyvsp[(1) - (6)].lval);
		(yyval.gen).index = (yyvsp[(3) - (6)].lval);
		(yyval.gen).scale = (yyvsp[(5) - (6)].lval);
		checkscale((yyval.gen).scale);
	}
    break;

  case 93:
#line 477 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+(yyvsp[(3) - (9)].lval);
		(yyval.gen).offset = (yyvsp[(1) - (9)].lval);
		(yyval.gen).index = (yyvsp[(6) - (9)].lval);
		(yyval.gen).scale = (yyvsp[(8) - (9)].lval);
		checkscale((yyval.gen).scale);
	}
    break;

  case 94:
#line 486 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+(yyvsp[(2) - (3)].lval);
	}
    break;

  case 95:
#line 491 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+D_SP;
	}
    break;

  case 96:
#line 496 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+(yyvsp[(3) - (4)].lval);
		(yyval.gen).offset = (yyvsp[(1) - (4)].lval);
	}
    break;

  case 97:
#line 502 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+D_NONE;
		(yyval.gen).index = (yyvsp[(2) - (5)].lval);
		(yyval.gen).scale = (yyvsp[(4) - (5)].lval);
		checkscale((yyval.gen).scale);
	}
    break;

  case 98:
#line 510 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_INDIR+(yyvsp[(2) - (8)].lval);
		(yyval.gen).index = (yyvsp[(5) - (8)].lval);
		(yyval.gen).scale = (yyvsp[(7) - (8)].lval);
		checkscale((yyval.gen).scale);
	}
    break;

  case 99:
#line 520 "a.y"
    {
		(yyval.gen) = (yyvsp[(1) - (1)].gen);
	}
    break;

  case 100:
#line 524 "a.y"
    {
		(yyval.gen) = (yyvsp[(1) - (6)].gen);
		(yyval.gen).index = (yyvsp[(3) - (6)].lval);
		(yyval.gen).scale = (yyvsp[(5) - (6)].lval);
		checkscale((yyval.gen).scale);
	}
    break;

  case 101:
#line 533 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = (yyvsp[(4) - (5)].lval);
		(yyval.gen).sym = (yyvsp[(1) - (5)].sym);
		(yyval.gen).offset = (yyvsp[(2) - (5)].lval);
	}
    break;

  case 102:
#line 540 "a.y"
    {
		(yyval.gen) = nullgen;
		(yyval.gen).type = D_STATIC;
		(yyval.gen).sym = (yyvsp[(1) - (7)].sym);
		(yyval.gen).offset = (yyvsp[(4) - (7)].lval);
	}
    break;

  case 103:
#line 548 "a.y"
    {
		(yyval.lval) = 0;
	}
    break;

  case 104:
#line 552 "a.y"
    {
		(yyval.lval) = (yyvsp[(2) - (2)].lval);
	}
    break;

  case 105:
#line 556 "a.y"
    {
		(yyval.lval) = -(yyvsp[(2) - (2)].lval);
	}
    break;

  case 107:
#line 563 "a.y"
    {
		(yyval.lval) = D_AUTO;
	}
    break;

  case 110:
#line 571 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (1)].sym)->value;
	}
    break;

  case 111:
#line 575 "a.y"
    {
		(yyval.lval) = -(yyvsp[(2) - (2)].lval);
	}
    break;

  case 112:
#line 579 "a.y"
    {
		(yyval.lval) = (yyvsp[(2) - (2)].lval);
	}
    break;

  case 113:
#line 583 "a.y"
    {
		(yyval.lval) = ~(yyvsp[(2) - (2)].lval);
	}
    break;

  case 114:
#line 587 "a.y"
    {
		(yyval.lval) = (yyvsp[(2) - (3)].lval);
	}
    break;

  case 116:
#line 594 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) + (yyvsp[(3) - (3)].lval);
	}
    break;

  case 117:
#line 598 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) - (yyvsp[(3) - (3)].lval);
	}
    break;

  case 118:
#line 602 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) * (yyvsp[(3) - (3)].lval);
	}
    break;

  case 119:
#line 606 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) / (yyvsp[(3) - (3)].lval);
	}
    break;

  case 120:
#line 610 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) % (yyvsp[(3) - (3)].lval);
	}
    break;

  case 121:
#line 614 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (4)].lval) << (yyvsp[(4) - (4)].lval);
	}
    break;

  case 122:
#line 618 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (4)].lval) >> (yyvsp[(4) - (4)].lval);
	}
    break;

  case 123:
#line 622 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) & (yyvsp[(3) - (3)].lval);
	}
    break;

  case 124:
#line 626 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) ^ (yyvsp[(3) - (3)].lval);
	}
    break;

  case 125:
#line 630 "a.y"
    {
		(yyval.lval) = (yyvsp[(1) - (3)].lval) | (yyvsp[(3) - (3)].lval);
	}
    break;


/* Line 1267 of yacc.c.  */
#line 2447 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



