/*
	Several people are standing in a row and need to be divided into two teams.

	The first person goes into team 1, the second goes into team 2, the third
		goes into team 1 again, the fourth into team 2, and so on.

	You are given an array of positive integers - the weights of the people.
	
	Return an array of two integers, where the first element is the total
		weight of team 1, and the second element is the total weight of
		team 2 after the division is complete.

	Example:
	- For a = [50, 60, 60, 45, 70], the output should be
		alternatingSums(a) = [180, 105].
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * alternatingSums(int * a, int tam);

int main()
{
	int * arrayInput = [50, 60, 60, 45, 70];

	int tam = sizeof(arrayInput) / sizeof(arrayInput[0]);
	int arrayOutput[2];

	arrayOutput = alternatingSums(arrayInput, tam);

	system("cls");

	printf("Sum 1=[%d]\n", arrayOutput[0]);
	printf("Sum 2=[%d]\n", arrayOutput[1]);

	return 0;
}

int * alternatingSums(int * a, int tam)
{
	int b[2];

	for ( int count=0; count<tam; count++ )
	{
		if (( count % 2) == 0 )
			b[0] += a[count];
		else
			b[1] += a[count];
	}
	return b;
}