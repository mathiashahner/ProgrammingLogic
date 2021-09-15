/*
    Write a function that reverses characters in (possibly nested) parentheses in the input string.
    Input strings will always be well-formed with matching ()s.

    Example:
    - For inputString = "(bar)", the output should be
        reverseInParentheses(inputString) = "rab";

    - For inputString = "foo(bar)baz", the output should
        be reverseInParentheses(inputString) = "foorabbaz";

    - For inputString = "foo(bar)baz(blim)", the output should be 
        reverseInParentheses(inputString) = "foorabbazmilb";

    - For inputString = "foo(bar(baz))blim", the output should be
        reverseInParentheses(inputString) = "foobazrabblim".
    Because "foo(bar(baz))blim" becomes "foo(barzab)blim" and then "foobazrabblim".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverseInParentheses( char * inputString );

int main()
{
    system("cls");
    printf("Common Character=[%s]\n", reverseInParentheses("foo(bar(baz))blim"));

    return 0;
}

void revstr( char * first, char * last )
{
	while (first < last)
	{
		char c = *last;
		*last = *first;
		*first = c;
		first++;
		last--;
	}
}

char * reverseInParentheses( char * inputString )
{
	int len = strlen( inputString );
	char * lastOpenBracket = strrchr( inputString, '(' );
    
	while ( lastOpenBracket != NULL )
	{
		char * closeBracket = strchr( lastOpenBracket, ')' );
		revstr( lastOpenBracket, closeBracket - 1 );
		int num = len - ( closeBracket - inputString - 1 );
		memmove( closeBracket - 1, closeBracket + 1, num );
		len -= 2;
		lastOpenBracket = strrchr( inputString, '(' );
	}
    
	return inputString;	
}