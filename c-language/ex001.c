#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador(char letra, char *p);

int main()
{
    char letra;
    char palavra[50];

    printf("Digite uma palavra: ");
    gets(palavra);
    printf("\nDigite uma letra: ");
    scanf("%c", &letra);

    contador(letra, palavra);

    return 0;
}

int contador(char letra, char *p)
{
    int num = 0;

    printf("\n\nA palavra digitada foi: %s\n", p);

    while(*p != '\0'){
        if(*p == letra)
            num++;
        p++;
    }

    printf("E a letra '%c' aparece %d vezes.\n\n", letra, num);

    return 0;
}
