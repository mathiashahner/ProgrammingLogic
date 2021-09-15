/*
    Two arrays are called similar if one can be obtained from another
        by swapping at most one pair of elements in one of the arrays.

    Given two arrays a and b, check whether they are similar.

    Example:
        - For a = [1, 2, 3] and b = [1, 2, 3], the output should be
            areSimilar(a, b) = true.

        - The arrays are equal, no need to swap any elements.

        - For a = [1, 2, 3] and b = [2, 1, 3], the output should be
            areSimilar(a, b) = true.

        - We can obtain b from a by swapping 2 and 1 in b.

        - For a = [1, 2, 2] and b = [2, 1, 1], the output should be
            areSimilar(a, b) = false.

        - Any swap of any two elements either in a or in b won't make a and b equal.
*/

#include <stdio.h>
#include <stdlib.h>

bool areSimilar(int * a, int tamA, int * b, int tamB);

int main()
{
    int * a = [1, 2, 3];
    int * b = [2, 3, 1];

    int tamA = sizeof(a) / sizeof(a[0]);
    int tamB = sizeof(b) / sizeof(b[0]);

    system("cls");
    printf("Are Similar? %s\n", areSimilar( a, tamA, b, tamB ) == true ? "Yes" : "No" );

    return 0;
}

bool areSimilar(int * a, int tamA, int * b, int tamB)
{
    bool result = true;
    int i, j, count = 0;
    int c[tamA];

    for ( i=0; i<tamA; i++ )
    {
        for ( j=0; j<tamB; j++ )
        {
            if ( a[i] == b[j] )
            {
                c[i] = a[i];
                if ( i != j )
                    count++;
            }
        }

        if (( a[i] != c[i] ) || ( count > 2 ))
        {
            result = false;
            break;
        }
    }
    return result;
}