#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TAM 5

int InserirVisitante(char *nome, char *cpf);
int MostrarVisitantes();
int GerarRelatorio();

struct visitante{
    char nome[50];
    char cpf[20];
};

struct visitante pilha[TAM];

int topo = 0;

int main()
{
    int aux = 0;
    char nome[50], cpf[20];

    while(aux != 4)
    {
        printf("Controle de Visitantes do Museu\n\n");
        printf("1 - Inserir Visitante\n");
        printf("2 - Mostrar Visitantes\n");
        printf("3 - Gerar Relatorio\n");
        printf("4 - Fechar Programa\n");

        printf("\nInforme uma opcao: ");
        scanf("%d", &aux);
        fflush(stdin);

        switch (aux)
        {
            case 1:
                system("cls");

                if(topo >= TAM)
                {
                    printf("Museu lotado, aguarde na fila!\n\n");
                }
                else
                {
                    printf("Cadastro de Visitante:\n\n");

                    printf("Nome: ");
                    scanf("%s", &nome);
                    fflush(stdin);

                    printf("CPF: ");
                    scanf("%s", &cpf);
                    fflush(stdin);

                    InserirVisitante(nome, cpf);
                }

                break;
            case 2:
                system("cls");
                MostrarVisitantes();
                break;
            case 3:
                system("cls");
                GerarRelatorio();
                break;
            case 4:
                break;
            default:
                system("cls");
                printf("Opcao invalida!\n\n");
                break;
        }
    }

    return 0;
}

int InserirVisitante(char *nome, char *cpf)
{
	strcpy(pilha[topo].nome, nome);
	strcpy(pilha[topo].cpf, cpf);

    topo++;

    system("cls");
}

int MostrarVisitantes()
{
    int i, zero;

	if(topo <= 0)
	{
		printf("Museu vazio!\n\n");
		return -1;
	}

	printf("Visitantes no museu:\n\n");

	for(i=0; i<topo; i++)
	{
        printf("Visitante %d:\n", i+1);
        printf("Nome: %s\n", pilha[i].nome);
        printf("CPF: %s\n\n", pilha[i].cpf);
        //printf("\n\n");
	}

	printf("0 - Menu inicial: ");
	scanf("%d", &zero);
	system("cls");
}

int GerarRelatorio()
{
    int i;

    if(topo <= 0)
	{
		printf("Nenhum visitante no museu para gerar relatorio!\n\n");
		return -1;
	}

    FILE *arq = NULL;
    arq = fopen("Histórico de Visitantes.txt", "a");

    if(arq == NULL)
    {
        printf("Erro ao gerar o relatorio!\n\n");
        return -1;
    }

    time_t rawtime;
    time (&rawtime);

    fprintf(arq, "%s\n", ctime(&rawtime));

    for(i=0; i<topo; i++)
    {
        fprintf(arq, "Nome: %s\n", pilha[i].nome);
        fprintf(arq, "CPF: %s\n\n", pilha[i].cpf);
    }

    fprintf(arq, "%s", "------------------------\n\n");

    fclose(arq);

    topo = 0;

    printf("Relatorio gerado com sucesso!\n\n");
}
