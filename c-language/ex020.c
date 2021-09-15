/*
    Given a rectangular matrix of characters, add a border of asterisks(*) to it.

    Example:
        - For picture = ["abc",
                         "ded"]
        
        the output should be addBorder(picture) = ["*****",
                                                   "*abc*",
                                                   "*ded*",
                                                   "*****"]

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * addBorder(char * picture, int tam);

int main()
{    
    char * arrayInput = ["abc",
                         "ded"];

    int tam = sizeof(arrayInput) / sizeof(arrayInput[0]);
    char * arrayOutput;

    system("cls");
    int arrayOutput = addBorder(arrayInput);

    for (int i=0; i < tam+2; i++)
        printf("%s, ", arrayOutput[i]);

    return 0;
}

char * addBorder(char * picture, int tam)
{   
    int newLen = strlen(picture[0])+2;
    int newSize = tam + 2;

    char * border[newSize];

    for( int i=0; i<newSize; i++ )
    {
        border[i] = (char*) malloc(sizeof(char)*(newLen+1));
        
        if( i==0 || i==newSize-1 )
        {
            memset( border[i],'*',newLen );
        }
        else
        {
            sprintf( border[i], "*%s*", picture[i-1]);
        }
    }

    return border;
}