%{
	#include <stdlib.h>
%}

%%
[a-zA-Z]	{ yyval = yytext; return IDENTIFIER; }
%%

