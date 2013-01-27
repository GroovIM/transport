
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 42 "asn1-parse.y"

#ifndef BUILD_GENTOOLS
# include <config.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>

#ifdef BUILD_GENTOOLS
# include "gen-help.h"
#else
# include "util.h"
# include "ksba.h"
#endif

#include "asn1-func.h"

/* It would be better to make yyparse static but there is no way to do
   this.  Let's hope that this macros works. */
#define yyparse _ksba_asn1_yyparse

/*#define YYDEBUG 1*/
#define YYERROR_VERBOSE = 1
#define MAX_STRING_LENGTH 129

/* constants used in the grammar */
enum {
  CONST_EXPLICIT = 1,
  CONST_IMPLICIT
};

struct parser_control_s {
  FILE *fp;
  int lineno;
  int debug;
  int result_parse;
  AsnNode parse_tree;
  AsnNode all_nodes;
};
#define PARSECTL ((struct parser_control_s *)parm)
#define YYPARSE_PARAM parm
#define YYLEX_PARAM parm



/* Line 189 of yacc.c  */
#line 122 "/home/wk/w/libksba/src/asn1-parse.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ASSIG = 258,
     NUM = 259,
     IDENTIFIER = 260,
     OPTIONAL = 261,
     INTEGER = 262,
     SIZE = 263,
     OCTET = 264,
     STRING = 265,
     SEQUENCE = 266,
     BIT = 267,
     UNIVERSAL = 268,
     PRIVATE = 269,
     APPLICATION = 270,
     DEFAULT = 271,
     CHOICE = 272,
     OF = 273,
     OBJECT = 274,
     STR_IDENTIFIER = 275,
     BOOLEAN = 276,
     TRUE = 277,
     FALSE = 278,
     TOKEN_NULL = 279,
     ANY = 280,
     DEFINED = 281,
     BY = 282,
     SET = 283,
     EXPLICIT = 284,
     IMPLICIT = 285,
     DEFINITIONS = 286,
     TAGS = 287,
     BEGIN = 288,
     END = 289,
     UTCTime = 290,
     GeneralizedTime = 291,
     FROM = 292,
     IMPORTS = 293,
     ENUMERATED = 294,
     UTF8STRING = 295,
     NUMERICSTRING = 296,
     PRINTABLESTRING = 297,
     TELETEXSTRING = 298,
     IA5STRING = 299,
     UNIVERSALSTRING = 300,
     BMPSTRING = 301
   };
#endif
/* Tokens.  */
#define ASSIG 258
#define NUM 259
#define IDENTIFIER 260
#define OPTIONAL 261
#define INTEGER 262
#define SIZE 263
#define OCTET 264
#define STRING 265
#define SEQUENCE 266
#define BIT 267
#define UNIVERSAL 268
#define PRIVATE 269
#define APPLICATION 270
#define DEFAULT 271
#define CHOICE 272
#define OF 273
#define OBJECT 274
#define STR_IDENTIFIER 275
#define BOOLEAN 276
#define TRUE 277
#define FALSE 278
#define TOKEN_NULL 279
#define ANY 280
#define DEFINED 281
#define BY 282
#define SET 283
#define EXPLICIT 284
#define IMPLICIT 285
#define DEFINITIONS 286
#define TAGS 287
#define BEGIN 288
#define END 289
#define UTCTime 290
#define GeneralizedTime 291
#define FROM 292
#define IMPORTS 293
#define ENUMERATED 294
#define UTF8STRING 295
#define NUMERICSTRING 296
#define PRINTABLESTRING 297
#define TELETEXSTRING 298
#define IA5STRING 299
#define UNIVERSALSTRING 300
#define BMPSTRING 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 94 "asn1-parse.y"

  unsigned int constant;
  char str[MAX_STRING_LENGTH];
  AsnNode node;



/* Line 214 of yacc.c  */
#line 258 "/home/wk/w/libksba/src/asn1-parse.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 100 "asn1-parse.y"

static AsnNode new_node (struct parser_control_s *parsectl, node_type_t type);
#define NEW_NODE(a)  (new_node (PARSECTL, (a)))
static void set_name (AsnNode node, const char *name);
static void set_str_value (AsnNode node, const char *text);
static void set_ulong_value (AsnNode node, const char *text);
static void set_right (AsnNode node, AsnNode right);
static void append_right (AsnNode node, AsnNode right);
static void set_down (AsnNode node, AsnNode down);


static int yylex (YYSTYPE *lvalp, void *parm);
static void yyerror (const char *s);


/* Line 264 of yacc.c  */
#line 286 "/home/wk/w/libksba/src/asn1-parse.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    50,     2,    47,    51,    48,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    17,    19,
      21,    23,    25,    27,    31,    36,    38,    42,    44,    47,
      49,    54,    56,    59,    61,    63,    65,    69,    74,    76,
      79,    82,    85,    88,    91,    93,    98,   106,   108,   110,
     112,   117,   125,   127,   131,   134,   138,   140,   143,   145,
     148,   150,   153,   155,   158,   160,   163,   165,   168,   170,
     173,   175,   177,   179,   181,   183,   185,   187,   192,   194,
     198,   201,   207,   212,   215,   217,   220,   222,   224,   226,
     228,   230,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   251,   253,   256,   259,   262,   264,   268,   273,   277,
     282,   287,   291,   296,   301,   303,   308,   312,   320,   327,
     332,   334,   336,   338,   341,   346,   347,   353,   355,   357
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    -1,    58,   108,    -1,     4,    -1,    47,
       4,    -1,    48,     4,    -1,    59,    -1,    60,    -1,     4,
      -1,     5,    -1,    61,    -1,     5,    -1,    49,    61,    50,
      -1,     5,    49,    61,    50,    -1,    64,    -1,    65,    51,
      64,    -1,     5,    -1,    66,     5,    -1,    62,    -1,     5,
      49,     4,    50,    -1,    67,    -1,    68,    67,    -1,    13,
      -1,    14,    -1,    15,    -1,    52,     4,    53,    -1,    52,
      69,     4,    53,    -1,    70,    -1,    70,    29,    -1,    70,
      30,    -1,    16,    63,    -1,    16,    22,    -1,    16,    23,
      -1,     7,    -1,     7,    54,    65,    55,    -1,    73,    49,
      62,    56,    56,    62,    50,    -1,    21,    -1,    35,    -1,
      36,    -1,     8,    49,    62,    50,    -1,     8,    49,    62,
      56,    56,    62,    50,    -1,    76,    -1,    49,    76,    50,
      -1,     9,    10,    -1,     9,    10,    77,    -1,    40,    -1,
      40,    77,    -1,    41,    -1,    41,    77,    -1,    42,    -1,
      42,    77,    -1,    43,    -1,    43,    77,    -1,    44,    -1,
      44,    77,    -1,    45,    -1,    45,    77,    -1,    46,    -1,
      46,    77,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,     5,    49,     4,
      50,    -1,    87,    -1,    88,    51,    87,    -1,    12,    10,
      -1,    12,    10,    54,    88,    55,    -1,    39,    54,    88,
      55,    -1,    19,    20,    -1,     5,    -1,     5,    77,    -1,
      73,    -1,    90,    -1,    74,    -1,    86,    -1,    75,    -1,
      78,    -1,    89,    -1,    97,    -1,    91,    -1,    99,    -1,
     100,    -1,    98,    -1,    24,    -1,    92,    -1,    71,    92,
      -1,    93,    -1,    93,    72,    -1,    93,     6,    -1,     5,
      94,    -1,    95,    -1,    96,    51,    95,    -1,    11,    54,
      96,    55,    -1,    11,    18,    92,    -1,    11,    77,    18,
      92,    -1,    28,    54,    96,    55,    -1,    28,    18,    92,
      -1,    28,    77,    18,    92,    -1,    17,    54,    96,    55,
      -1,    25,    -1,    25,    26,    27,     5,    -1,     5,     3,
      93,    -1,     5,    19,    20,     3,    54,    68,    55,    -1,
       5,     5,     3,    54,    68,    55,    -1,     5,     7,     3,
       4,    -1,   101,    -1,   102,    -1,   103,    -1,   104,   103,
      -1,     5,    54,    68,    55,    -1,    -1,    38,    66,    37,
       5,    68,    -1,    29,    -1,    30,    -1,   105,    31,   107,
      32,     3,    33,   106,   104,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   180,   180,   181,   184,   185,   188,   195,   196,   199,
     200,   203,   204,   207,   212,   220,   221,   228,   233,   244,
     249,   257,   259,   266,   267,   268,   271,   277,   285,   287,
     292,   299,   304,   309,   316,   320,   326,   337,   343,   347,
     353,   359,   368,   372,   378,   382,   390,   391,   398,   399,
     406,   408,   415,   417,   424,   425,   432,   434,   441,   442,
     451,   452,   453,   454,   455,   456,   457,   463,   471,   475,
     482,   486,   494,   502,   508,   513,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   538,
     542,   553,   557,   564,   571,   578,   580,   587,   592,   597,
     606,   611,   616,   625,   632,   636,   648,   655,   662,   671,
     680,   681,   684,   686,   693,   702,   703,   716,   717,   720
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"::=\"", "NUM", "IDENTIFIER",
  "OPTIONAL", "INTEGER", "SIZE", "OCTET", "STRING", "SEQUENCE", "BIT",
  "UNIVERSAL", "PRIVATE", "APPLICATION", "DEFAULT", "CHOICE", "OF",
  "OBJECT", "STR_IDENTIFIER", "BOOLEAN", "TRUE", "FALSE", "TOKEN_NULL",
  "ANY", "DEFINED", "BY", "SET", "EXPLICIT", "IMPLICIT", "DEFINITIONS",
  "TAGS", "BEGIN", "END", "UTCTime", "GeneralizedTime", "FROM", "IMPORTS",
  "ENUMERATED", "UTF8STRING", "NUMERICSTRING", "PRINTABLESTRING",
  "TELETEXSTRING", "IA5STRING", "UNIVERSALSTRING", "BMPSTRING", "'+'",
  "'-'", "'('", "')'", "','", "'['", "']'", "'{'", "'}'", "'.'", "$accept",
  "input", "pos_num", "neg_num", "pos_neg_num", "num_identifier",
  "pos_neg_identifier", "constant", "constant_list", "identifier_list",
  "obj_constant", "obj_constant_list", "class", "tag_type", "tag",
  "default", "integer_def", "boolean_def", "Time", "size_def2", "size_def",
  "octet_string_def", "utf8_string_def", "numeric_string_def",
  "printable_string_def", "teletex_string_def", "ia5_string_def",
  "universal_string_def", "bmp_string_def", "string_def", "bit_element",
  "bit_element_list", "bit_string_def", "enumerated_def", "object_def",
  "type_assig_right", "type_assig_right_tag",
  "type_assig_right_tag_default", "type_assig", "type_assig_list",
  "sequence_def", "set_def", "choise_def", "any_def", "type_def",
  "constant_def", "type_constant", "type_constant_list", "definitions_id",
  "imports_def", "explicit_implicit", "definitions", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    43,    45,    40,
      41,    44,    91,    93,   123,   125,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    69,    70,    70,    71,    71,
      71,    72,    72,    72,    73,    73,    73,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    86,    87,    88,    88,
      89,    89,    90,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    95,    96,    96,    97,    97,    97,
      98,    98,    98,    99,   100,   100,   101,   102,   102,   102,
     103,   103,   104,   104,   105,   106,   106,   107,   107,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     3,     1,     2,     1,
       4,     1,     2,     1,     1,     1,     3,     4,     1,     2,
       2,     2,     2,     2,     1,     4,     7,     1,     1,     1,
       4,     7,     1,     3,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       2,     5,     4,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     1,     3,     4,     3,     4,
       4,     3,     4,     4,     1,     4,     3,     7,     6,     4,
       1,     1,     1,     2,     4,     0,     5,     1,     1,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     3,     0,     0,     9,    10,
      19,    21,     0,   117,   118,     0,     0,   114,    22,     0,
       0,     0,    20,   115,     0,     0,    17,     0,     0,   110,
     111,   112,     0,    18,     0,     0,     0,     0,     0,   119,
     113,     0,    74,    34,     0,     0,     0,     0,     0,    37,
      88,   104,     0,    38,    39,     0,    46,    48,    50,    52,
      54,    56,    58,     0,    28,     0,    76,    78,    80,    81,
      60,    61,    62,    63,    64,    65,    66,    79,    82,    77,
      84,    89,   106,    83,    87,    85,    86,     0,     0,     0,
       0,     0,     0,    42,    75,     0,    44,     0,     0,     0,
      70,     0,    73,     0,     0,     0,     0,     0,    47,    49,
      51,    53,    55,    57,    59,     0,    23,    24,    25,     0,
      29,    30,    90,     0,     0,   109,     0,     0,     0,     0,
       0,    15,     0,    45,    98,     0,    95,     0,     0,     0,
       0,     0,   101,     0,     0,     0,    68,     0,    26,     0,
      10,     0,     0,     0,     0,    43,     0,     4,     0,     0,
       7,     8,     0,     0,    35,    91,    94,     0,    97,    99,
       0,   103,   105,   100,   102,     0,     0,    72,    27,     0,
     108,     0,    40,     0,     0,     5,     6,    13,    16,    93,
       0,    92,    96,    71,     0,    69,     0,   107,     0,    14,
      12,    32,    33,    11,    31,    67,     0,     0,    36,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   160,   161,   162,    10,   204,   131,   132,    27,
      11,    12,   119,    64,    65,   191,    66,    67,    68,    93,
      94,    69,    70,    71,    72,    73,    74,    75,    76,    77,
     146,   147,    78,    79,    80,    81,    82,   166,   136,   137,
      83,    84,    85,    86,    29,    30,    31,    32,     4,    25,
      15,     5
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
    -144,    38,  -144,   -18,    18,  -144,   105,     0,  -144,    12,
    -144,  -144,     1,  -144,  -144,    39,    63,  -144,  -144,    71,
      56,    60,  -144,    57,   109,   123,  -144,    23,    83,  -144,
    -144,  -144,    21,  -144,   125,    80,   132,   133,   117,  -144,
    -144,   105,    16,    84,   134,    15,   135,    88,   128,  -144,
    -144,   126,    19,  -144,  -144,    95,    16,    16,    16,    16,
      16,    16,    16,    31,    82,   122,   102,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,    99,   150,   152,
     105,   107,   151,  -144,  -144,     4,    16,   122,   155,   153,
     116,   155,  -144,   145,   122,   155,   156,   168,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,   124,  -144,  -144,  -144,   171,
    -144,  -144,  -144,   113,   105,  -144,   127,   113,   129,   131,
       3,  -144,    -3,  -144,  -144,    80,  -144,     8,   122,   168,
      25,   173,  -144,    43,   122,   136,  -144,    45,  -144,   130,
    -144,   120,     7,   105,   -25,  -144,     3,  -144,   178,   180,
    -144,  -144,   137,     4,  -144,    26,  -144,   155,  -144,  -144,
      52,  -144,  -144,  -144,  -144,   182,   168,  -144,  -144,   138,
    -144,    17,  -144,   139,   140,  -144,  -144,  -144,  -144,  -144,
      35,  -144,  -144,  -144,   141,  -144,   113,  -144,   113,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,   142,   143,  -144,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -143,  -119,  -144,    33,  -144,  -144,
     -12,   -40,  -144,  -144,  -144,  -144,  -144,  -144,  -144,    96,
     -42,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
      13,    58,  -144,  -144,  -144,   -63,    64,  -144,    34,   -35,
    -144,  -144,  -144,  -144,  -144,  -144,   166,  -144,  -144,  -144,
    -144,  -144
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      18,    90,   122,    99,   151,     8,     9,   157,   154,   129,
     106,     8,     9,   184,   108,   109,   110,   111,   112,   113,
     114,     8,     9,    91,    91,   182,    28,    91,    33,    13,
      14,   183,   189,    97,   134,   115,     6,   104,     2,   157,
     200,   142,   190,     3,   116,   117,   118,   203,   163,     7,
     158,   159,   164,   130,   133,    39,    17,   201,   202,   167,
      34,    16,   180,   168,    92,    92,   140,    20,    92,    98,
     143,    19,   197,   105,    21,   169,   167,   206,    18,   207,
     171,   174,   158,   159,   152,    42,    35,    43,    36,    44,
      37,    45,    46,    23,   167,    24,   176,    47,   173,    48,
     177,    49,    38,   176,    50,    51,    22,   193,    52,     8,
       9,   120,   121,   181,    26,    53,    54,     8,   150,    55,
      56,    57,    58,    59,    60,    61,    62,    42,    28,    43,
      41,    44,    63,    45,    46,    87,    88,    89,    95,    47,
      18,    48,   101,    49,    96,   100,    50,    51,   102,   107,
      52,   123,   103,   124,   125,   126,   127,    53,    54,    91,
     135,    55,    56,    57,    58,    59,    60,    61,    62,    18,
     139,   138,   141,   145,   144,   149,   179,   148,   172,   155,
     156,   153,   185,   178,   186,   175,   194,   187,   128,   195,
     199,   205,   208,   209,   196,   198,   188,   170,    40,   165,
       0,   192
};

static const yytype_int16 yycheck[] =
{
      12,    41,    65,    45,   123,     4,     5,     4,   127,     5,
      52,     4,     5,   156,    56,    57,    58,    59,    60,    61,
      62,     4,     5,     8,     8,    50,     5,     8,     5,    29,
      30,    56,     6,    18,    97,     4,    54,    18,     0,     4,
       5,   104,    16,     5,    13,    14,    15,   190,    51,    31,
      47,    48,    55,    49,    96,    34,    55,    22,    23,    51,
      37,    49,    55,    55,    49,    49,   101,     4,    49,    54,
     105,    32,    55,    54,     3,   138,    51,   196,    90,   198,
      55,   144,    47,    48,   124,     5,     3,     7,     5,     9,
       7,    11,    12,    33,    51,    38,    51,    17,    55,    19,
      55,    21,    19,    51,    24,    25,    50,    55,    28,     4,
       5,    29,    30,   153,     5,    35,    36,     4,     5,    39,
      40,    41,    42,    43,    44,    45,    46,     5,     5,     7,
       5,     9,    52,    11,    12,     3,     3,    20,    54,    17,
     152,    19,    54,    21,    10,    10,    24,    25,    20,    54,
      28,    49,    26,    54,     4,     3,    49,    35,    36,     8,
       5,    39,    40,    41,    42,    43,    44,    45,    46,   181,
      54,    18,    27,     5,    18,     4,    56,    53,     5,    50,
      49,    54,     4,    53,     4,    49,     4,    50,    92,   176,
      50,    50,    50,    50,    56,    56,   163,   139,    32,   135,
      -1,   167
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,     0,     5,   105,   108,    54,    31,     4,     5,
      62,    67,    68,    29,    30,   107,    49,    55,    67,    32,
       4,     3,    50,    33,    38,   106,     5,    66,     5,   101,
     102,   103,   104,     5,    37,     3,     5,     7,    19,    34,
     103,     5,     5,     7,     9,    11,    12,    17,    19,    21,
      24,    25,    28,    35,    36,    39,    40,    41,    42,    43,
      44,    45,    46,    52,    70,    71,    73,    74,    75,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    90,
      91,    92,    93,    97,    98,    99,   100,     3,     3,    20,
      68,     8,    49,    76,    77,    54,    10,    18,    54,    77,
      10,    54,    20,    26,    18,    54,    77,    54,    77,    77,
      77,    77,    77,    77,    77,     4,    13,    14,    15,    69,
      29,    30,    92,    49,    54,     4,     3,    49,    76,     5,
      49,    64,    65,    77,    92,     5,    95,    96,    18,    54,
      96,    27,    92,    96,    18,     5,    87,    88,    53,     4,
       5,    62,    68,    54,    62,    50,    49,     4,    47,    48,
      59,    60,    61,    51,    55,    93,    94,    51,    55,    92,
      88,    55,     5,    55,    92,    49,    51,    55,    53,    56,
      55,    68,    50,    56,    61,     4,     4,    50,    64,     6,
      16,    72,    95,    55,     4,    87,    56,    55,    56,    50,
       5,    22,    23,    61,    63,    50,    62,    62,    50,    50
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 4:

/* Line 1455 of yacc.c  */
#line 184 "asn1-parse.y"
    { strcpy((yyval.str),(yyvsp[(1) - (1)].str)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 185 "asn1-parse.y"
    { strcpy((yyval.str),(yyvsp[(2) - (2)].str)); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 189 "asn1-parse.y"
    {
                  strcpy((yyval.str),"-");
                  strcat((yyval.str),(yyvsp[(2) - (2)].str));
                }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 195 "asn1-parse.y"
    { strcpy((yyval.str),(yyvsp[(1) - (1)].str)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 196 "asn1-parse.y"
    { strcpy((yyval.str),(yyvsp[(1) - (1)].str)); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 199 "asn1-parse.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 200 "asn1-parse.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 203 "asn1-parse.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 204 "asn1-parse.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].str));}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 208 "asn1-parse.y"
    {
                          (yyval.node) = NEW_NODE (TYPE_CONSTANT);
                          set_str_value ((yyval.node), (yyvsp[(2) - (3)].str));
                        }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 213 "asn1-parse.y"
    {
                          (yyval.node) = NEW_NODE (TYPE_CONSTANT);
                          set_name ((yyval.node), (yyvsp[(1) - (4)].str));
                          set_str_value ((yyval.node), (yyvsp[(3) - (4)].str));
                        }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 220 "asn1-parse.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 222 "asn1-parse.y"
    {
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                    append_right ((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 229 "asn1-parse.y"
    {
                          (yyval.node) = NEW_NODE (TYPE_IDENTIFIER);
                          set_name((yyval.node),(yyvsp[(1) - (1)].str));
                        }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 234 "asn1-parse.y"
    {
                          AsnNode node;

                          (yyval.node)=(yyvsp[(1) - (2)].node);
                          node = NEW_NODE (TYPE_IDENTIFIER);
                          set_name (node, (yyvsp[(2) - (2)].str));
                          append_right ((yyval.node), node);
                        }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 245 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_CONSTANT);
                   set_str_value ((yyval.node), (yyvsp[(1) - (1)].str));
                 }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 250 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_CONSTANT);
                   set_name ((yyval.node), (yyvsp[(1) - (4)].str));
                   set_str_value ((yyval.node), (yyvsp[(3) - (4)].str));
                 }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 258 "asn1-parse.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 260 "asn1-parse.y"
    {
                          (yyval.node)=(yyvsp[(1) - (2)].node);
                          append_right ((yyval.node), (yyvsp[(2) - (2)].node));
                        }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 266 "asn1-parse.y"
    { (yyval.constant) = CLASS_UNIVERSAL;   }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 267 "asn1-parse.y"
    { (yyval.constant) = CLASS_PRIVATE;     }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 268 "asn1-parse.y"
    { (yyval.constant) = CLASS_APPLICATION; }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 272 "asn1-parse.y"
    {
                  (yyval.node) = NEW_NODE (TYPE_TAG);
                  (yyval.node)->flags.class = CLASS_CONTEXT;
                  set_ulong_value ((yyval.node), (yyvsp[(2) - (3)].str));
                }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 278 "asn1-parse.y"
    {
                  (yyval.node) = NEW_NODE (TYPE_TAG);
                  (yyval.node)->flags.class = (yyvsp[(2) - (4)].constant);
                  set_ulong_value ((yyval.node), (yyvsp[(3) - (4)].str));
                }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 286 "asn1-parse.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 288 "asn1-parse.y"
    {
           (yyval.node) = (yyvsp[(1) - (2)].node);
           (yyval.node)->flags.explicit = 1;
         }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 293 "asn1-parse.y"
    {
           (yyval.node) = (yyvsp[(1) - (2)].node);
           (yyval.node)->flags.implicit = 1;
         }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 300 "asn1-parse.y"
    {
                 (yyval.node) = NEW_NODE (TYPE_DEFAULT);
                 set_str_value ((yyval.node), (yyvsp[(2) - (2)].str));
               }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 305 "asn1-parse.y"
    {
                 (yyval.node) = NEW_NODE (TYPE_DEFAULT);
                 (yyval.node)->flags.is_true = 1;
               }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 310 "asn1-parse.y"
    {
                 (yyval.node) = NEW_NODE (TYPE_DEFAULT);
                 (yyval.node)->flags.is_false = 1;
               }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 317 "asn1-parse.y"
    {
                 (yyval.node) = NEW_NODE (TYPE_INTEGER);
               }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 321 "asn1-parse.y"
    {
                 (yyval.node) = NEW_NODE (TYPE_INTEGER);
                 (yyval.node)->flags.has_list = 1;
                 set_down ((yyval.node), (yyvsp[(3) - (4)].node));
               }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 327 "asn1-parse.y"
    {
                 (yyval.node) = NEW_NODE (TYPE_INTEGER);
                 (yyval.node)->flags.has_min_max = 1;
                 /* the following is wrong.  Better use a union for the value*/
                 set_down ((yyval.node), NEW_NODE (TYPE_SIZE) );
                 set_str_value ((yyval.node)->down, (yyvsp[(6) - (7)].str));
                 set_name ((yyval.node)->down, (yyvsp[(3) - (7)].str));
               }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 338 "asn1-parse.y"
    {
                (yyval.node) = NEW_NODE (TYPE_BOOLEAN);
              }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 344 "asn1-parse.y"
    {
            (yyval.node) = NEW_NODE (TYPE_UTC_TIME);
          }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 348 "asn1-parse.y"
    {
            (yyval.node) = NEW_NODE (TYPE_GENERALIZED_TIME);
          }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 354 "asn1-parse.y"
    {
               (yyval.node) = NEW_NODE (TYPE_SIZE);
               (yyval.node)->flags.one_param = 1;
               set_str_value ((yyval.node), (yyvsp[(3) - (4)].str));
             }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 360 "asn1-parse.y"
    {
               (yyval.node) = NEW_NODE (TYPE_SIZE);
               (yyval.node)->flags.has_min_max = 1;
               set_str_value ((yyval.node), (yyvsp[(3) - (7)].str));
               set_name ((yyval.node), (yyvsp[(6) - (7)].str));
             }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 369 "asn1-parse.y"
    {
               (yyval.node)=(yyvsp[(1) - (1)].node);
             }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 373 "asn1-parse.y"
    {
               (yyval.node)=(yyvsp[(2) - (3)].node);
             }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 379 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_OCTET_STRING);
                     }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 383 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_OCTET_STRING);
                       (yyval.node)->flags.has_size = 1;
                       set_down ((yyval.node),(yyvsp[(3) - (3)].node));
                     }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 390 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_UTF8_STRING); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 392 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_UTF8_STRING);
                       (yyval.node)->flags.has_size = 1;
                       set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                     }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 398 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_NUMERIC_STRING); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 400 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_NUMERIC_STRING);
                       (yyval.node)->flags.has_size = 1;
                       set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                     }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 407 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_PRINTABLE_STRING); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 409 "asn1-parse.y"
    {
                          (yyval.node) = NEW_NODE (TYPE_PRINTABLE_STRING);
                          (yyval.node)->flags.has_size = 1;
                          set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                        }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 416 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_TELETEX_STRING); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 418 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_TELETEX_STRING);
                       (yyval.node)->flags.has_size = 1;
                       set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                     }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 424 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_IA5_STRING); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 426 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_IA5_STRING);
                       (yyval.node)->flags.has_size = 1;
                       set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                     }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 433 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_UNIVERSAL_STRING); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 435 "asn1-parse.y"
    {
                           (yyval.node) = NEW_NODE (TYPE_UNIVERSAL_STRING);
                           (yyval.node)->flags.has_size = 1;
                           set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                         }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 441 "asn1-parse.y"
    { (yyval.node) = NEW_NODE (TYPE_BMP_STRING); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 443 "asn1-parse.y"
    {
                       (yyval.node) = NEW_NODE (TYPE_BMP_STRING);
                       (yyval.node)->flags.has_size = 1;
                       set_down ((yyval.node),(yyvsp[(2) - (2)].node));
                     }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 464 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_CONSTANT);
                   set_name ((yyval.node), (yyvsp[(1) - (4)].str));
                   set_str_value ((yyval.node), (yyvsp[(3) - (4)].str));
                 }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 472 "asn1-parse.y"
    {
                        (yyval.node)=(yyvsp[(1) - (1)].node);
                      }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 476 "asn1-parse.y"
    {
                        (yyval.node)=(yyvsp[(1) - (3)].node);
                        append_right ((yyval.node), (yyvsp[(3) - (3)].node));
                      }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 483 "asn1-parse.y"
    {
                     (yyval.node) = NEW_NODE (TYPE_BIT_STRING);
                   }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 487 "asn1-parse.y"
    {
                     (yyval.node) = NEW_NODE (TYPE_BIT_STRING);
                     (yyval.node)->flags.has_list = 1;
                     set_down ((yyval.node), (yyvsp[(4) - (5)].node));
                   }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 495 "asn1-parse.y"
    {
                     (yyval.node) = NEW_NODE (TYPE_ENUMERATED);
                     (yyval.node)->flags.has_list = 1;
                     set_down ((yyval.node), (yyvsp[(3) - (4)].node));
                   }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 503 "asn1-parse.y"
    {
                     (yyval.node) = NEW_NODE (TYPE_OBJECT_ID);
                   }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 509 "asn1-parse.y"
    {
                      (yyval.node) = NEW_NODE (TYPE_IDENTIFIER);
                      set_str_value ((yyval.node), (yyvsp[(1) - (1)].str));
                    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 514 "asn1-parse.y"
    {
                      (yyval.node) = NEW_NODE (TYPE_IDENTIFIER);
                      (yyval.node)->flags.has_size = 1;
                      set_str_value ((yyval.node), (yyvsp[(1) - (2)].str));
                      set_down ((yyval.node), (yyvsp[(2) - (2)].node));
                    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 520 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 521 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 522 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 523 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 525 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 526 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 527 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 528 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 529 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 530 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 531 "asn1-parse.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 533 "asn1-parse.y"
    {
                      (yyval.node) = NEW_NODE(TYPE_NULL);
                    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 539 "asn1-parse.y"
    {
                             (yyval.node) = (yyvsp[(1) - (1)].node);
                           }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 543 "asn1-parse.y"
    {
/*                               $2->flags.has_tag = 1; */
/*                               $$ = $2; */
/*                               set_right ($1, $$->down ); */
/*                               set_down ($$, $1); */
                             (yyval.node) = (yyvsp[(1) - (2)].node);
                             set_down ((yyval.node), (yyvsp[(2) - (2)].node));
                           }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 554 "asn1-parse.y"
    {
                                   (yyval.node) = (yyvsp[(1) - (1)].node);
                                 }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 558 "asn1-parse.y"
    {
                                   (yyvsp[(1) - (2)].node)->flags.has_default = 1;
                                   (yyval.node) = (yyvsp[(1) - (2)].node);
                                   set_right ((yyvsp[(2) - (2)].node), (yyval.node)->down);
                                   set_down ((yyval.node), (yyvsp[(2) - (2)].node));
                                 }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 565 "asn1-parse.y"
    {
                                   (yyvsp[(1) - (2)].node)->flags.is_optional = 1;
                                   (yyval.node) = (yyvsp[(1) - (2)].node);
                                 }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 572 "asn1-parse.y"
    {
                 set_name ((yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].str));
                 (yyval.node) = (yyvsp[(2) - (2)].node);
               }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 579 "asn1-parse.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 581 "asn1-parse.y"
    {
                      (yyval.node)=(yyvsp[(1) - (3)].node);
                      append_right ((yyval.node), (yyvsp[(3) - (3)].node));
                    }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 588 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_SEQUENCE);
                   set_down ((yyval.node), (yyvsp[(3) - (4)].node));
                 }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 593 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_SEQUENCE_OF);
                   set_down ((yyval.node), (yyvsp[(3) - (3)].node));
                 }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 598 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_SEQUENCE_OF);
                   (yyval.node)->flags.has_size = 1;
                   set_right ((yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node));
                   set_down ((yyval.node),(yyvsp[(2) - (4)].node));
                 }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 607 "asn1-parse.y"
    {
               (yyval.node) = NEW_NODE (TYPE_SET);
               set_down ((yyval.node), (yyvsp[(3) - (4)].node));
             }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 612 "asn1-parse.y"
    {
               (yyval.node) = NEW_NODE (TYPE_SET_OF);
               set_down ((yyval.node), (yyvsp[(3) - (3)].node));
             }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 617 "asn1-parse.y"
    {
               (yyval.node) = NEW_NODE (TYPE_SET_OF);
               (yyval.node)->flags.has_size = 1;
               set_right ((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
               set_down ((yyval.node), (yyvsp[(2) - (4)].node));
             }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 626 "asn1-parse.y"
    {
                  (yyval.node) = NEW_NODE (TYPE_CHOICE);
                  set_down ((yyval.node), (yyvsp[(3) - (4)].node));
                }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 633 "asn1-parse.y"
    {
               (yyval.node) = NEW_NODE (TYPE_ANY);
             }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 637 "asn1-parse.y"
    {
               AsnNode node;

               (yyval.node) = NEW_NODE (TYPE_ANY);
               (yyval.node)->flags.has_defined_by = 1;
               node = NEW_NODE (TYPE_CONSTANT);
               set_name (node, (yyvsp[(4) - (4)].str));
               set_down((yyval.node), node);
             }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 649 "asn1-parse.y"
    {
               set_name ((yyvsp[(3) - (3)].node), (yyvsp[(1) - (3)].str));
               (yyval.node) = (yyvsp[(3) - (3)].node);
             }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 656 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_OBJECT_ID);
                   (yyval.node)->flags.assignment = 1;
                   set_name ((yyval.node), (yyvsp[(1) - (7)].str));
                   set_down ((yyval.node), (yyvsp[(6) - (7)].node));
                 }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 663 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_OBJECT_ID);
                   (yyval.node)->flags.assignment = 1;
                   (yyval.node)->flags.one_param = 1;
                   set_name ((yyval.node), (yyvsp[(1) - (6)].str));
                   set_str_value ((yyval.node), (yyvsp[(2) - (6)].str));
                   set_down ((yyval.node), (yyvsp[(5) - (6)].node));
                 }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 672 "asn1-parse.y"
    {
                   (yyval.node) = NEW_NODE (TYPE_INTEGER);
                   (yyval.node)->flags.assignment = 1;
                   set_name ((yyval.node), (yyvsp[(1) - (4)].str));
                   set_str_value ((yyval.node), (yyvsp[(4) - (4)].str));
                 }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 680 "asn1-parse.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 681 "asn1-parse.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 685 "asn1-parse.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 687 "asn1-parse.y"
    {
                         (yyval.node) = (yyvsp[(1) - (2)].node);
                         append_right ((yyval.node), (yyvsp[(2) - (2)].node));
                       }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 694 "asn1-parse.y"
    {
                     (yyval.node) = NEW_NODE (TYPE_OBJECT_ID);
                     set_down ((yyval.node), (yyvsp[(3) - (4)].node));
                     set_name ((yyval.node), (yyvsp[(1) - (4)].str));
                   }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 702 "asn1-parse.y"
    { (yyval.node)=NULL;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 704 "asn1-parse.y"
    {
                  AsnNode node;

                  (yyval.node) = NEW_NODE (TYPE_IMPORTS);
                  node = NEW_NODE (TYPE_OBJECT_ID);
                  set_name (node, (yyvsp[(4) - (5)].str));
                  set_down (node, (yyvsp[(5) - (5)].node));
                  set_down ((yyval.node), node);
                  set_right ((yyval.node), (yyvsp[(2) - (5)].node));
                }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 716 "asn1-parse.y"
    { (yyval.constant) = CONST_EXPLICIT; }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 717 "asn1-parse.y"
    { (yyval.constant) = CONST_IMPLICIT; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 723 "asn1-parse.y"
    {
                 AsnNode node;

                 (yyval.node) = node = NEW_NODE (TYPE_DEFINITIONS);

                 if ((yyvsp[(3) - (9)].constant) == CONST_EXPLICIT)
                   node->flags.explicit = 1;
                 else if ((yyvsp[(3) - (9)].constant) == CONST_IMPLICIT)
                   node->flags.implicit = 1;

                 if ((yyvsp[(7) - (9)].node))
                   node->flags.has_imports = 1;

                 set_name ((yyval.node), (yyvsp[(1) - (9)].node)->name);
                 set_name ((yyvsp[(1) - (9)].node), "");

                 if (!node->flags.has_imports)
                   set_right ((yyvsp[(1) - (9)].node),(yyvsp[(8) - (9)].node));
                 else
                   {
                     set_right ((yyvsp[(7) - (9)].node),(yyvsp[(8) - (9)].node));
                     set_right ((yyvsp[(1) - (9)].node),(yyvsp[(7) - (9)].node));
                   }

                 set_down ((yyval.node), (yyvsp[(1) - (9)].node));

                 _ksba_asn_set_default_tag ((yyval.node));
                 _ksba_asn_type_set_config ((yyval.node));
                 PARSECTL->result_parse = _ksba_asn_check_identifier((yyval.node));
                 PARSECTL->parse_tree=(yyval.node);
               }
    break;



/* Line 1455 of yacc.c  */
#line 2717 "/home/wk/w/libksba/src/asn1-parse.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 756 "asn1-parse.y"


const char *key_word[]={
  "::=","OPTIONAL","INTEGER","SIZE","OCTET","STRING"
  ,"SEQUENCE","BIT","UNIVERSAL","PRIVATE","OPTIONAL"
  ,"DEFAULT","CHOICE","OF","OBJECT","IDENTIFIER"
  ,"BOOLEAN","TRUE","FALSE","APPLICATION","ANY","DEFINED"
  ,"SET","BY","EXPLICIT","IMPLICIT","DEFINITIONS","TAGS"
  ,"BEGIN","END","UTCTime","GeneralizedTime","FROM"
  ,"IMPORTS","NULL","ENUMERATED"
  ,"UTF8String","NumericString","PrintableString","TeletexString"
  ,"IA5String","UniversalString","BMPString"
};
const int key_word_token[]={
   ASSIG,OPTIONAL,INTEGER,SIZE,OCTET,STRING
  ,SEQUENCE,BIT,UNIVERSAL,PRIVATE,OPTIONAL
  ,DEFAULT,CHOICE,OF,OBJECT,STR_IDENTIFIER
  ,BOOLEAN,TRUE,FALSE,APPLICATION,ANY,DEFINED
  ,SET,BY,EXPLICIT,IMPLICIT,DEFINITIONS,TAGS
  ,BEGIN,END,UTCTime,GeneralizedTime,FROM
  ,IMPORTS,TOKEN_NULL,ENUMERATED
  ,UTF8STRING,NUMERICSTRING,PRINTABLESTRING,TELETEXSTRING
  ,IA5STRING,UNIVERSALSTRING,BMPSTRING
};


/*************************************************************/
/*  Function: yylex                                          */
/*  Description: looks for tokens in file_asn1 pointer file. */
/*  Return: int                                              */
/*    Token identifier or ASCII code or 0(zero: End Of File) */
/*************************************************************/
static int
yylex (YYSTYPE *lvalp, void *parm)
{
  int c,counter=0,k;
  char string[MAX_STRING_LENGTH];
  FILE *fp = PARSECTL->fp;

  if (!PARSECTL->lineno)
    PARSECTL->lineno++; /* start with line one */

  while (1)
    {
      while ( (c=fgetc (fp))==' ' || c=='\t')
        ;
      if (c =='\n')
        {
          PARSECTL->lineno++;
          continue;
        }
      if(c==EOF)
        return 0;

      if ( c=='(' || c==')' || c=='[' || c==']'
           || c=='{' || c=='}' || c==',' || c=='.' || c=='+')
        return c;

      if (c=='-')
        {
          if ( (c=fgetc(fp))!='-')
            {
              ungetc(c,fp);
              return '-';
            }
          else
            {
              /* A comment finishes at the end of line */
              counter=0;
              while ( (c=fgetc(fp))!=EOF && c != '\n' )
                ;
              if (c==EOF)
                return 0;
              else
                continue; /* repeat the search */
            }
        }

      do
        {
          if (counter >= DIM (string)-1 )
            {
              fprintf (stderr,"%s:%d: token too long\n", "myfile:",
                       PARSECTL->lineno);
              return 0; /* EOF */
            }
          string[counter++]=c;
        }
      while ( !((c=fgetc(fp))==EOF
                || c==' '|| c=='\t' || c=='\n'
                || c=='(' || c==')' || c=='[' || c==']'
                || c=='{' || c=='}' || c==',' || c=='.'));

      ungetc (c,fp);
      string[counter]=0;
      /*fprintf (stderr, "yylex token `%s'\n", string);*/

      /* Is STRING a number? */
      for (k=0; k<counter; k++)
        {
          if(!isdigit(string[k]))
            break;
        }
      if (k>=counter)
        {
          strcpy (lvalp->str,string);
          if (PARSECTL->debug)
            fprintf (stderr,"%d: yylex found number `%s'\n",
                     PARSECTL->lineno, string);
          return NUM;
        }

      /* Is STRING a keyword? */
      for (k=0; k<(sizeof(key_word)/sizeof(char*));k++ )
        {
          if (!strcmp(string,key_word[k]))
            {
              if (PARSECTL->debug)
                fprintf (stderr,"%d: yylex found keyword `%s'\n",
                         PARSECTL->lineno, string);
              return key_word_token[k];
            }
        }

      /* STRING is an IDENTIFIER */
      strcpy(lvalp->str,string);
      if (PARSECTL->debug)
        fprintf (stderr,"%d: yylex found identifier `%s'\n",
                 PARSECTL->lineno, string);
      return IDENTIFIER;
    }
}

static void
yyerror (const char *s)
{
  /* Sends the error description to stderr */
  fprintf (stderr, "%s\n", s);
  /* Why doesn't bison provide a way to pass the parm to yyerror ??*/
}



static AsnNode
new_node (struct parser_control_s *parsectl, node_type_t type)
{
  AsnNode node;

  node = xcalloc (1, sizeof *node);
  node->type = type;
  node->off = -1;
  node->link_next = parsectl->all_nodes;
  parsectl->all_nodes = node;

  return node;
}

static void
release_all_nodes (AsnNode node)
{
  AsnNode node2;

  for (; node; node = node2)
    {
      node2 = node->link_next;
      xfree (node->name);

      if (node->valuetype == VALTYPE_CSTR)
        xfree (node->value.v_cstr);
      else if (node->valuetype == VALTYPE_MEM)
        xfree (node->value.v_mem.buf);

      xfree (node);
    }
}

static void
set_name (AsnNode node, const char *name)
{
  _ksba_asn_set_name (node, name);
}

static void
set_str_value (AsnNode node, const char *text)
{
  if (text && *text)
    _ksba_asn_set_value (node, VALTYPE_CSTR, text, 0);
  else
    _ksba_asn_set_value (node, VALTYPE_NULL, NULL, 0);
}

static void
set_ulong_value (AsnNode node, const char *text)
{
  unsigned long val;

  if (text && *text)
    val = strtoul (text, NULL, 10);
  else
    val = 0;
  _ksba_asn_set_value (node, VALTYPE_ULONG, &val, sizeof(val));
}

static void
set_right (AsnNode node, AsnNode right)
{
  return_if_fail (node);

  node->right = right;
  if (right)
    right->left = node;
}

static void
append_right (AsnNode node, AsnNode right)
{
  return_if_fail (node);

  while (node->right)
    node = node->right;

  node->right = right;
  if (right)
    right->left = node;
}


static void
set_down (AsnNode node, AsnNode down)
{
  return_if_fail (node);

  node->down = down;
  if (down)
    down->left = node;
}


/**
 * ksba_asn_parse_file:
 * @file_name: Filename with the ASN module
 * @pointer: Returns the syntax tree
 * @debug: Enable debug output
 *
 * Parse an ASN.1 file and return an syntax tree.
 *
 * Return value: 0 for okay or an ASN_xx error code
 **/
int
ksba_asn_parse_file (const char *file_name, ksba_asn_tree_t *result, int debug)
{
  struct parser_control_s parsectl;

  *result = NULL;

  parsectl.fp = file_name? fopen (file_name, "r") : NULL;
  if ( !parsectl.fp )
    return gpg_error_from_syserror ();

  parsectl.lineno = 0;
  parsectl.debug = debug;
  parsectl.result_parse = gpg_error (GPG_ERR_SYNTAX);
  parsectl.parse_tree = NULL;
  parsectl.all_nodes = NULL;
  /*yydebug = 1;*/
  if ( yyparse ((void*)&parsectl) || parsectl.result_parse )
    { /* error */
      fprintf (stderr, "%s:%d: parse error\n",
               file_name?file_name:"-", parsectl.lineno );
      release_all_nodes (parsectl.all_nodes);
      parsectl.all_nodes = NULL;
    }
  else
    { /* okay */
      ksba_asn_tree_t tree;

      _ksba_asn_change_integer_value (parsectl.parse_tree);
      _ksba_asn_expand_object_id (parsectl.parse_tree);
      tree = xmalloc ( sizeof *tree + (file_name? strlen (file_name):1) );
      tree->parse_tree = parsectl.parse_tree;
      tree->node_list = parsectl.all_nodes;
      strcpy (tree->filename, file_name? file_name:"-");
      *result = tree;
    }

  if (file_name)
    fclose (parsectl.fp);
  return parsectl.result_parse;
}

void
ksba_asn_tree_release (ksba_asn_tree_t tree)
{
  if (!tree)
    return;
  release_all_nodes (tree->node_list);
  tree->node_list = NULL;
  xfree (tree);
}


void
_ksba_asn_release_nodes (AsnNode node)
{
  /* FIXME: it does not work yet because the allocation function in
     asn1-func.c does not link all nodes together */
  release_all_nodes (node);
}

