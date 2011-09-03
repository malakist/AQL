
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 Free Software
   Foundation, Inc.
   
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


/* First part of user declarations.  */


/* Line 311 of lalr1.cc  */
#line 41 "aql-parser.tab.cc"


#include "aql-parser.tab.hh"

/* User implementation prologue.  */


/* Line 317 of lalr1.cc  */
#line 50 "aql-parser.tab.cc"
/* Unqualified %code blocks.  */

/* Line 318 of lalr1.cc  */
#line 41 "aql-parser.yy"

#include "aql-driver.h"



/* Line 318 of lalr1.cc  */
#line 61 "aql-parser.tab.cc"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


/* Line 380 of lalr1.cc  */
#line 4 "aql-parser.yy"
namespace AQL {

/* Line 380 of lalr1.cc  */
#line 129 "aql-parser.tab.cc"
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  aql_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  aql_parser::aql_parser (aql_driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  aql_parser::~aql_parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  aql_parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  aql_parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  aql_parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  aql_parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  aql_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  aql_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  aql_parser::debug_level_type
  aql_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  aql_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  int
  aql_parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* User initialization code.  */
    
/* Line 553 of lalr1.cc  */
#line 36 "aql-parser.yy"
{
	yylloc.begin.filename = yylloc.end.filename = &driver.file;
}

/* Line 553 of lalr1.cc  */
#line 312 "aql-parser.tab.cc"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc, driver);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 2:

/* Line 678 of lalr1.cc  */
#line 93 "aql-parser.yy"
    { 
							(yyval.aqlNode) = new AQL::QueryNode();
							(yyval.aqlNode)->addChildNode((yysemantic_stack_[(5) - (2)].aqlNode));
							(yyval.aqlNode)->addChildNode((yysemantic_stack_[(5) - (3)].aqlNode));
							(yyval.aqlNode)->addChildNode((yysemantic_stack_[(5) - (4)].aqlNode));
							
							std::cout << "\n\nPreparando emissao da string...\n\n";
							
							AQL::TreeWalker * walker = new AQL::TreeWalker((yyval.aqlNode));
							walker->PerformEmitString();
						}
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 105 "aql-parser.yy"
    { 
							(yyval.aqlNode) = new AQL::QueryNode();
							(yyval.aqlNode)->addChildNode((yysemantic_stack_[(4) - (2)].aqlNode));
							(yyval.aqlNode)->addChildNode((yysemantic_stack_[(4) - (3)].aqlNode));
						}
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 113 "aql-parser.yy"
    { 
							(yyval.aqlNode) = new AQL::FromClauseNode(); 
							AQL::AqlNode * node = (yysemantic_stack_[(2) - (2)].aqlNode);
							while (node) {
								(yyval.aqlNode)->addChildNode(node);
								node = node->getLeftNode();
							}
						}
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 124 "aql-parser.yy"
    { (yyval.aqlNode) = (yysemantic_stack_[(1) - (1)].aqlNode); }
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 126 "aql-parser.yy"
    { (yysemantic_stack_[(3) - (1)].aqlNode)->setRightNode((yysemantic_stack_[(3) - (3)].aqlNode)); 
						  (yyval.aqlNode) = (yysemantic_stack_[(3) - (3)].aqlNode); }
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 131 "aql-parser.yy"
    { 
							AQL::TableNode * node = new AQL::TableNode();
							node->setTableName((yysemantic_stack_[(1) - (1)].identifierName));
							(yyval.aqlNode) = node;
						}
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 138 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::WhereNode(); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(2) - (2)].aqlNode)); }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 142 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::PredicateNode(); (yyval.aqlNode)->setRightNode((yysemantic_stack_[(1) - (1)].aqlNode)); (yyval.aqlNode) = (yysemantic_stack_[(1) - (1)].aqlNode);}
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 144 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalConnectorNode(AQL::LogicalConnectorTypes::NOT); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(2) - (1)].aqlNode)); }
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 146 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalConnectorNode(AQL::LogicalConnectorTypes::AND); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 148 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalConnectorNode(AQL::LogicalConnectorTypes::OR); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 151 "aql-parser.yy"
    { (yyval.aqlNode) = (yysemantic_stack_[(1) - (1)].aqlNode); }
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 152 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalCompNode(AQL::Operator::EQ); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 153 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalCompNode(AQL::Operator::NE); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 154 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalCompNode(AQL::Operator::GT); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 155 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalCompNode(AQL::Operator::LT); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 156 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalCompNode(AQL::Operator::GE); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 157 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::LogicalCompNode(AQL::Operator::LE); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (1)].aqlNode)); (yyval.aqlNode)->addChildNode((yysemantic_stack_[(3) - (3)].aqlNode)); }
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 161 "aql-parser.yy"
    { 	(yyval.aqlNode) = new AQL::SelectNode();  }
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 163 "aql-parser.yy"
    { 
							(yyval.aqlNode) = new AQL::SelectNode();
							AQL::AqlNode * node = (yysemantic_stack_[(2) - (2)].aqlNode);
							while(node) {
								(yyval.aqlNode)->addChildNode(node);
								node = node->getLeftNode();
							}
						}
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 174 "aql-parser.yy"
    {
							(yyval.aqlNode) = (yysemantic_stack_[(1) - (1)].aqlNode);
						}
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 178 "aql-parser.yy"
    {
							(yysemantic_stack_[(3) - (1)].aqlNode)->setRightNode((yysemantic_stack_[(3) - (3)].aqlNode));
							(yyval.aqlNode) = (yysemantic_stack_[(3) - (3)].aqlNode);
						}
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 185 "aql-parser.yy"
    {
							AQL::ColumnNode * node = new AQL::ColumnNode();
							node->setTableName((yysemantic_stack_[(3) - (1)].identifierName));
							node->setColumnName((yysemantic_stack_[(3) - (3)].identifierName));
							(yyval.aqlNode) = node;
						}
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 192 "aql-parser.yy"
    {
							AQL::FunctionNode * node = new AQL::FunctionNode(); 
							node->setFunctionName((yysemantic_stack_[(4) - (1)].identifierName));
							node->setArgument((yysemantic_stack_[(4) - (3)].aqlNode));
							(yyval.aqlNode) = node; 
						}
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 198 "aql-parser.yy"
    { (yyval.aqlNode) = (yysemantic_stack_[(3) - (2)].aqlNode); }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 199 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::IntegerNode((yysemantic_stack_[(1) - (1)].literalValue)); }
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 200 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::FloatNode((yysemantic_stack_[(1) - (1)].literalValue)); }
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 201 "aql-parser.yy"
    { (yyval.aqlNode) = new AQL::StringNode((yysemantic_stack_[(1) - (1)].literalValue)); }
    break;



/* Line 678 of lalr1.cc  */
#line 675 "aql-parser.tab.cc"
	default:
          break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
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
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  aql_parser::yysyntax_error_ (int yystate, int tok)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char aql_parser::yypact_ninf_ = -16;
  const signed char
  aql_parser::yypact_[] =
  {
       -15,     0,    18,    20,   -11,   -16,   -16,     9,   -16,    -2,
      10,    13,    21,    20,    -1,   -16,   -16,   -16,    10,    10,
      -5,   -16,    28,    22,   -16,    24,   -16,   -16,    40,    10,
     -16,    23,    10,    10,    10,    10,    10,    10,    10,    10,
      10,   -16,   -16,    25,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  aql_parser::yydefact_[] =
  {
         0,     0,     0,     0,     0,     1,     7,     4,     5,     0,
      20,     0,     0,     0,     0,    27,    28,    29,     0,     0,
       8,     9,    13,    21,    22,     0,     3,     6,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    24,     0,    26,    11,    12,    14,    15,    16,
      17,    18,    19,    23,    25
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  aql_parser::yypgoto_[] =
  {
       -16,   -16,   -16,   -16,    33,   -16,   -16,     2,    37,   -16,
     -10
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  aql_parser::yydefgoto_[] =
  {
        -1,     2,     4,     7,     8,    11,    20,    21,    12,    23,
      22
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char aql_parser::yytable_ninf_ = -1;
  const unsigned char
  aql_parser::yytable_[] =
  {
        24,    14,    15,    16,    17,     1,    28,     9,    10,    31,
      32,    33,    18,    14,    15,    16,    17,     3,     5,    43,
      30,    19,    29,     6,    47,    48,    49,    50,    51,    52,
      53,    13,    10,    19,    45,    46,    34,    35,    36,    37,
      38,    39,    26,    42,    40,    41,    27,    44,    25,    54
  };

  /* YYCHECK.  */
  const unsigned char
  aql_parser::yycheck_[] =
  {
        10,     3,     4,     5,     6,    20,     7,    18,    19,    19,
      15,    16,    14,     3,     4,     5,     6,    17,     0,    29,
      18,    23,    23,     3,    34,    35,    36,    37,    38,    39,
      40,    22,    19,    23,    32,    33,     8,     9,    10,    11,
      12,    13,    21,     3,    22,    21,    13,    24,    11,    24
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  aql_parser::yystos_[] =
  {
         0,    20,    26,    17,    27,     0,     3,    28,    29,    18,
      19,    30,    33,    22,     3,     4,     5,     6,    14,    23,
      31,    32,    35,    34,    35,    33,    21,    29,     7,    23,
      32,    35,    15,    16,     8,     9,    10,    11,    12,    13,
      22,    21,     3,    35,    24,    32,    32,    35,    35,    35,
      35,    35,    35,    35,    24
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  aql_parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    44,    40,    41
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  aql_parser::yyr1_[] =
  {
         0,    25,    26,    26,    27,    28,    28,    29,    30,    31,
      31,    31,    31,    32,    32,    32,    32,    32,    32,    32,
      33,    33,    34,    34,    35,    35,    35,    35,    35,    35
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  aql_parser::yyr2_[] =
  {
         0,     2,     5,     4,     2,     1,     3,     1,     2,     1,
       2,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     2,     1,     3,     3,     4,     3,     1,     1,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const aql_parser::yytname_[] =
  {
    "\"end\"", "error", "$undefined", "\"identifier\"", "\"integer\"",
  "\"float\"", "\"string\"", "\"->\"", "\"==\"", "\"!=\"", "\">\"",
  "\"<\"", "\">=\"", "\"<=\"", "\".Not.\"", "\".And.\"", "\".Or.\"",
  "\"From\"", "\"Where\"", "\"Select\"", "\"Begin Query\"",
  "\"End Query\"", "','", "'('", "')'", "$accept", "query", "from_clause",
  "table_list", "table_identifier", "where_clause", "predicate_list",
  "predicate", "select_clause", "member_list", "expression", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const aql_parser::rhs_number_type
  aql_parser::yyrhs_[] =
  {
        26,     0,    -1,    20,    27,    30,    33,    21,    -1,    20,
      27,    33,    21,    -1,    17,    28,    -1,    29,    -1,    28,
      22,    29,    -1,     3,    -1,    18,    31,    -1,    32,    -1,
      14,    32,    -1,    31,    15,    32,    -1,    31,    16,    32,
      -1,    35,    -1,    35,     8,    35,    -1,    35,     9,    35,
      -1,    35,    10,    35,    -1,    35,    11,    35,    -1,    35,
      12,    35,    -1,    35,    13,    35,    -1,    19,    -1,    19,
      34,    -1,    35,    -1,    34,    22,    35,    -1,     3,     7,
       3,    -1,     3,    23,    35,    24,    -1,    23,    35,    24,
      -1,     4,    -1,     5,    -1,     6,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  aql_parser::yyprhs_[] =
  {
         0,     0,     3,     9,    14,    17,    19,    23,    25,    28,
      30,    33,    37,    41,    43,    47,    51,    55,    59,    63,
      67,    69,    72,    74,    78,    82,    87,    91,    93,    95
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  aql_parser::yyrline_[] =
  {
         0,    92,    92,   104,   112,   123,   125,   130,   138,   141,
     143,   145,   147,   151,   152,   153,   154,   155,   156,   157,
     160,   162,   173,   177,   184,   191,   198,   199,   200,   201
  };

  // Print the state stack on the debug stream.
  void
  aql_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  aql_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  aql_parser::token_number_type
  aql_parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      23,    24,     2,     2,    22,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int aql_parser::yyeof_ = 0;
  const int aql_parser::yylast_ = 49;
  const int aql_parser::yynnts_ = 11;
  const int aql_parser::yyempty_ = -2;
  const int aql_parser::yyfinal_ = 5;
  const int aql_parser::yyterror_ = 1;
  const int aql_parser::yyerrcode_ = 256;
  const int aql_parser::yyntokens_ = 25;

  const unsigned int aql_parser::yyuser_token_number_max_ = 276;
  const aql_parser::token_number_type aql_parser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 4 "aql-parser.yy"
} // AQL

/* Line 1054 of lalr1.cc  */
#line 1132 "aql-parser.tab.cc"


/* Line 1056 of lalr1.cc  */
#line 204 "aql-parser.yy"

void AQL::aql_parser::error(const AQL::aql_parser::location_type& l, const std::string& m) {
	driver.error(l, m);
}

