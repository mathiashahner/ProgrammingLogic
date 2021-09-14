#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct super{   //declaração da struct
    char tipo[50];
    char marca[30];
    float preco;
    int qtd;
};

void cadastro(struct super *p, int n);
void cadastrados(struct super *p, int n);
void alterar_preco(struct super *p);

int main()
{
    struct super *s = NULL;   //vetor para a struct
    int opcao = 0, tam = 0;

    printf("---------- Estoque de Intens ----------\n\n");

    while(tam < 1){   //pelo menos 1 item deve ser cadastrado
        printf("Quantos itens voce deseja cadastrar? ");
        scanf("%d", &tam);

        if(tam < 1)
            printf("Voce deve cadastrar pelo menos um item!\n\n");
    }

    s = malloc(tam * sizeof(struct super));

    if(s == NULL)   //caso não seja possível alocar memória suficiente
    {
        printf("\nO estoque nao comporta tantos itens!\n");
        return 0;
    }
    else
    {
        cadastro(s, tam);
        cadastrados(s, tam);

        while(opcao == 0)
        {
            printf("0 - Alterar precos\n");
            printf("1 - Sair\n\n");

            printf("Informe uma opcao: ");
            scanf("%d", &opcao);

            if(opcao == 0)
            {
                alterar_preco(s);
                cadastrados(s, tam);
            }
        }
    }

    return 0;
}

void cadastro(struct super *p, int n)
{
    for(int i=0; i<n; i++){
        system("cls");

        printf("Produto %d:\n\nTipo: ", i);
        scanf("%s", &p[i].tipo);
        fflush(stdin);

        printf("Marca: ");
        scanf("%s", &p[i].marca);
        fflush(stdin);

        printf("Preco: ");
        scanf("%f", &p[i].preco);
        fflush(stdin);

        printf("Quantidade: ");
        scanf("%d", &p[i].qtd);
        fflush(stdin);
    }
}

void cadastrados(struct super *p, int n)
{
    system("cls");

    printf("Produtos Cadastrados:\n\n");

    for(int i=0; i<n; i++){
        printf("Produto %d:\n\n", i);
        printf("Tipo: %s\n", p[i].tipo);
        printf("Marca: %s\n", p[i].marca);
        printf("Preco: %.2f\n", p[i].preco);
        printf("Quantidade: %d\n", p[i].qtd);
        printf("------------------\n\n");
    }
}

void alterar_preco(struct super *p)
{
    int produto;

    printf("Informe o numero do produto: ");
    scanf("%d", &produto);

    system("cls");

    printf("Informe o novo preco: ");
    scanf("%f", &p[produto].preco);
}
