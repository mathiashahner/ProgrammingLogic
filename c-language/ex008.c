/*
    Given the string, check if it is a palindrome.

    Example:
        - For inputString = "aabaa", the output should be checkPalindrome(inputString) = true;
        - For inputString = "abac", the output should be checkPalindrome(inputString) = false;
        - For inputString = "a", the output should be checkPalindrome(inputString) = true
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

bool checkPalindrome(char * inputString);

int main()
{
    char inputString[51];

    system("cls");
    printf("Enter a Text: ");
    scanf("%50s", inputString);

    printf("\n\nText is palindrome? %d", checkPalindrome(inputString));

    return 0;
}

bool checkPalindrome(char * inputString)
{       
    int i, j, tam, result;
    tam = strlen(inputString);
    char inputInverse[tam];
    
    for( i=0, j=tam-1; i<tam; i++, j-- )
    {
        inputInverse[i] = inputString[j];
        //printf("inputInverse[%c] inputString[%c] i=[%d] j=[%d]\n", inputInverse[i], inputString[j], i, j);
    }
    
    inputInverse[tam] = '\0';
    
    printf("\nString =[%s]\nInverse=[%s]", inputString, inputInverse);
    
    if( strcmp(inputString, inputInverse) == 0 )
        result = TRUE;
    else
        result = FALSE;
    
    return result;
}