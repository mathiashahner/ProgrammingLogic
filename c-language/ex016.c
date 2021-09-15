/*
    Ticket numbers usually consist of an even number of digits.

    A ticket number is considered lucky if the sum of the first
        half of the digits is equal to the sum of the second half.

    Given a ticket number n, determine if it's lucky or not.

    Example:
    - For n = 1230, the output should be isLucky(n) = true;
    - For n = 239017, the output should be isLucky(n) = false.
*/

#include <stdio.h>
#include <stdlib.h>

bool isLucky(int n);

int main()
{
    system("cls");
    printf("Is Lucky? %s\n", isLucky( 1230 ) == true ? "Yes" : "No" );

    return 0;
}

bool isLucky(int n)
{
    char buff[32];
    int i, len, sum1 = 0, sum2 = 0;

    len = sprintf(buff, "%d", n);
    
    for(i = 0; i < len; i++)
    {
        if(i < (len / 2))
            sum1 += (buff[i] - '0' );
        else
            sum2 += (buff[i] - '0' );
    }
    
    return ( sum1 == sum2 );
}