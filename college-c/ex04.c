#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente {
    char nome[100];
    char cpf[20];
};

void cadastro(struct cliente *p, int n);
void bubblesort(struct cliente *p, int n);
void exibir(struct cliente *p, int n);

int i;

int main()
{
    int tam = 0;

    while(tam < 1)  // pelo menos 1 usuário deve ser cadastrado
    {
        printf("Quantos clientes voce deseja cadastrar? ");
        scanf("%d", &tam);
        fflush(stdin);
        system("cls");
    }

    struct cliente clientes[tam];

    cadastro(clientes, tam);
    bubblesort(clientes, tam);
    exibir(clientes, tam);

    return 0;
}

void cadastro(struct cliente *p, int n)
{
    for(i=0; i<n; i++)
    {
        printf("Informe os dados do cliente %d:\n\n", i+1);

        printf("Nome: ");
        scanf("%s", &p[i].nome);
        fflush(stdin);

        printf("CPF: ");
        scanf("%s", &p[i].cpf);
        fflush(stdin);

        system("cls");
    }
}

void bubblesort(struct cliente *p, int n)
{
    int troca = 1;
    char aux_nome[100];
    char aux_cpf[20];

    while(troca == 1)
    {
        troca = 0;

        for(i=0; i<n-1; i++)
        {
            if(strcmp(p[i].nome, p[i+1].nome) > 0)
            {
                troca = 1;

                strcpy(aux_nome, p[i].nome);
                strcpy(p[i].nome, p[i+1].nome);
                strcpy(p[i+1].nome, aux_nome);

                strcpy(aux_cpf, p[i].cpf);
                strcpy(p[i].cpf, p[i+1].cpf);
                strcpy(p[i+1].cpf, aux_cpf);
            }
        }
    }
}

void exibir(struct cliente *p, int n)
{
    printf("Clientes ordenados em ordem alfabetica:\n\n");

    for(i=0; i<n; i++)
    {
        printf("Cliente %d\n", i+1);
        printf("Nome: %s\n", p[i].nome);
        printf("CPF : %s\n\n", p[i].cpf);
    }
}
