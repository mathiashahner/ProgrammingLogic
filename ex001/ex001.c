#include <stdio.h>
#include <string.h>
#include <ctype.h>

int RomanToDecimal( char * numRoman );

int main()
{
    char numRoman[21];
    int numDecimal;

    system("cls");
    printf("Enter a Roman Number: ");
    scanf("%20s", numRoman);

    while( strcmp( numRoman, "exit" ) != 0 )
    {
        numDecimal = RomanToDecimal( numRoman );

        if ( numDecimal == -1 )
        {
            printf("\nInvalid Input!\n\n");
        }
        else
        {
            printf("\n%s = %d\n\n", numRoman, numDecimal);           
        }

        printf("-----------------------------------------");
        printf("\n\nEnter a Roman Number or type 'exit': ");
        scanf("%20s", numRoman);        
        system("cls");
    }

    return 0;
}

int RomanToDecimal( char * numRoman )
{
    int numDecimal = 0;

    if ( numRoman != NULL)
    {
        int count, lastInput = 0;

        for ( count = 0; numRoman[count] != '\0'; count++ )
        { 
            numRoman[count] = toupper( numRoman[count] );
        }

        for ( count = 0; numRoman[count] != '\0'; count++ )
        {
            if ( numRoman[count] == 'X' ) 
            {
                if ( lastInput == 5 )
                {
                    numDecimal = -1;
                    break;                    
                }
                else if ( lastInput == 1 )
                {
                    numDecimal += 8;                    
                }
                else
                {
                    numDecimal += 10;
                }

                lastInput = 10;
            }
            else if ( numRoman[count] == 'V' )
            {
                if ( lastInput == 5 )
                {
                    numDecimal = -1;
                    break;                    
                }
                else if ( lastInput == 1 )
                {
                    numDecimal += 3;                    
                }
                else
                {
                    numDecimal += 5;
                }

                lastInput = 5;
            }
            else if ( numRoman[count] == 'I' )
            {
                numDecimal += 1;
                lastInput = 1;
            }  
            else
            {
                printf("\nInvalid Input\nCharacter '%c' is not a Roman Numeral!\n", numRoman[count]);
                numDecimal = -1;
                break;
            }
        }
    }
    else
    {
        numDecimal = -1;
    }

    return numDecimal;
}