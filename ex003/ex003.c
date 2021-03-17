#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

bool checkPalindrome(char * inputString)
{       
    int i, j, tam, result;
    tam = strlen(inputString);
    char inputInverse[tam];
    
    for( i=0, j=tam-1; i<tam; i++, j-- )
    {
        inputInverse[i] = inputString[j];
        printf("inputInverse[%c] inputString[%c] i=[%d] j=[%d]\n", inputInverse[i], inputString[j], i, j);
    }
    
    inputInverse[tam] = '\0';
    
    printf("String =[%s]\nInverse=[%s]\n", inputString, inputInverse);
    
    if( strcmp(inputString, inputInverse) == 0 )
        result = TRUE;
    else
        result = FALSE;
    
    return result;
}