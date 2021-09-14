/*
    Given an array of strings, return another array containing all of its longest strings.

    Example:
        - For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int allLongestStrings(char * inputArray[], int tamInput, char * outputArray[]);

int main()
{
    char * arrayInput[] = {"aab", "bbc", "abc"};

    int tamInput = sizeof(arrayInput) / sizeof(arrayInput[0]);
    char * arrayOutput[tamInput];

    system("cls");
    int tamOutput = allLongestStrings(arrayInput, tamInput, arrayOutput);

    printf("\narrayOutput:\n");

    for (int i=0; i < tamOutput; i++)
        printf("%s, ", arrayOutput[i]);

    return 0;
}

int allLongestStrings(char * inputArray[], int tamInput, char * outputArray[])
{
    int i, j=0, maxSize=0;

    for (i=0; i < tamInput; i++)
    {
        if (strlen(inputArray[i]) > maxSize)
            maxSize = strlen(inputArray[i]);
        printf("inputArray=[%zu] maxSize=[%d]\n", strlen(inputArray[i]), maxSize);
    }

    for (i=0; i < tamInput; i++)
    {
        if (strlen(inputArray[i]) == maxSize)
        {
            printf("i=[%d] j=[%d] inputArray=[%s]\n", i, j, inputArray[i]);
            outputArray[j++] = inputArray[i];
        }
    }
    return j;
}