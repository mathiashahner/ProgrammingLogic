/*
    Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, each statue having an non-negative integer size. Since he likes to make things perfect, he wants to arrange them from smallest to largest so that each statue will be bigger than the previous one exactly by 1. He may need some additional statues to be able to accomplish that. Help him figure out the minimum number of additional statues needed.

    Example:
        - For statues = [6, 2, 3, 8], the output should be makeArrayConsecutive2(statues) = 3.
        - Ratiorg needs statues of sizes 4, 5 and 7.
*/

int makeArrayConsecutive2(int statues[], int tam);

int main()
{
    int vector[] = {2,9,4,6};
    int tam = sizeof(vector) / sizeof(vector[0]);

    system("cls");
    printf("\nQtd of statues = %d\n\n", makeArrayConsecutive2( vector, tam));

    return 0;
}

int makeArrayConsecutive2(int statues[], int tam)
{
    int minor, major, count;
    
    minor = statues[0];
    major = 0;
    
    for(count=0; count<tam; count++)
    {
        if( statues[count] >= 0 )
        {
            if( statues[count] > major )
                major = statues[count];
            if( statues[count] < minor )
                minor = statues[count];
        }
        
        printf("minor=[%d] major=[%d] statues[%d]=[%d]\n", minor, major, count, statues[count]);
    }
    
    return( major - minor - tam + 1 );
}