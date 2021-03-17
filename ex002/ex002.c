#include <stdio.h>

int firstDuplicate( int * a );

int main()
{
    int a[] = {2,6,8,2,4};

    printf("%d\n", firstDuplicate(a));

    return 0;
}

int firstDuplicate( int * a )
{
    int tam, result;

    tam = sizeof(a)/sizeof(int);

    for( int i=0; i<tam; i++ )
    {
        result = a[i];

        for( int j=0; j<tam; j++ )
        {
            if( result == a[j] )
            {
                result = a[j];
            }
            else
            {
                result = -1;
            }
        }
    }

    return result;
}