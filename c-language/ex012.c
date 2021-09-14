/*
    Given a sequence of integers as an array, determine whether it is possible to obtain a strictly increasing sequence by removing no more than one element from the array.

    Note: sequence a0, a1, ..., an is considered to be a strictly increasing if a0 < a1 < ... < an. Sequence containing only one element is also considered to be strictly increasing.

    Example:
        - For sequence = [1, 3, 2, 1], the output should be almostIncreasingSequence(sequence) = false.
        - There is no one element in this array that can be removed in order to get a strictly increasing sequence.
        - For sequence = [1, 3, 2], the output should be almostIncreasingSequence(sequence) = true.
        - You can remove 3 from the array to get the strictly increasing sequence [1, 2]. Alternately, you can remove 2 to get the strictly increasing sequence [1, 3].
*/

#include <stdio.h>
#include <stdbool.h>

bool almostIncreasingSequence(int sequence[], int tam);

int main()
{
    int sequence[] = {5,1,3};
    int tam = sizeof(sequence) / sizeof(sequence[0]);

    system("cls");
    printf("\nIs sequence possible? %d\n\n", almostIncreasingSequence(sequence, tam));

    return 0;
}

bool almostIncreasingSequence(int sequence[], int tam)
{
    int bad=0, count;

    for(count=1; count<tam-1; count++) 
    
    if(sequence[count] <= sequence[count-1])
    {
        bad++;

        if(bad > 1)
            return false;

        if((sequence[count] <= sequence[count-2]) && (sequence[count+1] <= sequence[count-1]))
            return false;
    }

    return true;
}