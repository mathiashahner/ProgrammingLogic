/*
    Some people are standing in a row in a park.
    There are trees between them which cannot be moved.

    Your task is to rearrange the people by their heights
        in a non-descending order without moving the trees.

    People can be very tall!

Example:
    - For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should
        be sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
*/

#include <stdio.h>
#include <stdlib.h>

int * sortByHeight(int * a, int tam);

int main()
{    
    int * arrayInput = [-1, 150, 190, 170, -1, -1, 160, 180];

    int tam = sizeof(arrayInput) / sizeof(arrayInput[0]);
    int * arrayOutput[tam];

    system("cls");
    int arrayOutput = sortByHeight(arrayInput, tam, arrayOutput);

    printf("\narrayOutput:\n");

    for (int i=0; i<tam; i++)
        printf("%s, ", arrayOutput[i]);

    return 0;
}

int compare ( const void * a, const void * b )
{
    return ( *(int*)a - *(int*)b );
}

int * sortByHeight(int * a, int tam)
{
    size_t count, index;
    
    for ( count=0, index=0; count<tam; count++ )
    {        
        if ( a[count] != -1 )
            index++;
    }

    int tmp[index];

    for ( count=0, index=0; count<tam; count++ )
    {        
        if ( a[count] != -1 )
        {
            tmp[index] = a[count];
            index++;
        }
    }

    qsort ( tmp, (sizeof(tmp) / sizeof(tmp[0])), sizeof(tmp[0]), compare );

    for ( count=0, index=0; count<tam; count++ )
    {        
        if ( a[count] != -1 )
        {
            a[count] = tmp[index];
            index++;
        }
    }

    return a;
}