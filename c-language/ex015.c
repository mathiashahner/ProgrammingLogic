/*
    Given two strings, find the number of common characters between them.

    Example:
        - For s1 = "aabcc" and s2 = "adcaa", the output should be commonCharacterCount(s1, s2) = 3.
        - Strings have 3 common characters - 2 "a"s and 1 "c".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int commonCharacterCount(char * s1, char * s2);

int main()
{
    system("cls");
    printf("Common Character=[%d]\n", allLongestStrings("aabcc", "adcaa"));

    return 0;
}

int commonCharacterCount(char * s1, char * s2)
{
    int i, j, result = 0;

    for( i = 0; s1[i] != '\0'; i++ )
    {
        for( j = 0; s2[j] != '\0'; j++ )
        {
            printf("s1=[%c] s2=[%c]\n", s1[i], s2[j]);

            if(( s1[i] == s2[j] ) && ( s2[j] != ' ' ))
            {
                s2[j] = ' ';
                result++;
                break;
            }
        }
    }
    return result;
}