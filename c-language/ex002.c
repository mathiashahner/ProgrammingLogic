#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cadastro();
int cadastrados();
int login();

struct usuario{
    char usuario[50];
    char senha[20];
    char admin;
};

struct usuario usuarios[3];

int main()
{
    cadastro();

    int opcao = 0;

    printf("----- Menu Inicial -----\n\n");

    while(opcao != 3){

        printf("1 - Usuarios cadastrados\n");
        printf("2 - Efetuar login\n");
        printf("3 - Encerrar programa\n\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao){
            case 1:
                system("cls");
                cadastrados();
                break;
            case 2:
                system("cls");
                login();
                break;
            case 3:
                system("cls");
                printf("Fim do programa!\n\n");
                break;
            default:
                system("cls");
                printf("Opcao invalida!\n\n");
        }
    }

    return 0;
}

int cadastro()
{
    for(int i=0; i<3; i++){

        system("cls");

        printf("Informe os dados do usuario %d:\n\n", i+1);

        printf("Usuario: ");
        scanf("%s", &usuarios[i].usuario);
        fflush(stdin);

        printf("Senha: ");
        scanf("%s", &usuarios[i].senha);
        fflush(stdin);

        printf("\n0 - Nao\n1 - Sim\nPermissao de Administrador: ");
        scanf("%c", &usuarios[i].admin);
        fflush(stdin);
    }

    system("cls");

    return 0;
}

int cadastrados()
{
    printf("Usuarios cadastrados:\n\n");

    for(int i=0; i<3; i++){
        printf("Usuario %d: %s\n", i+1, usuarios[i].usuario);

        if(usuarios[i].admin == '0')
            printf("Permissao de Administrador: Nao\n\n");
        else
            printf("Permissao de Administrador: Sim\n\n");
    }

    printf("-------------------------------\n\n");
    printf("0 - Menu Inicial: ");

    int menu = 1;

    while(menu != 0)
        scanf("%d", &menu);

    system("cls");

    return 0;
}

int login()
{
    int menu = 1;
    int sucesso = 0;
    char usuario_temp[50];
    char senha_temp[20];

    while(menu != 0){
        printf("Informe seus dados para efetuar o login:\n\n");

        printf("Usuario: ");
        scanf("%s", usuario_temp);
        printf("Senha: ");
        scanf("%s", senha_temp);

        for(int i=0; i<3; i++){
            if(strcmp(usuario_temp, usuarios[i].usuario) == 0 && strcmp(senha_temp, usuarios[i].senha) == 0)
                sucesso = 1;
        }

        system("cls");

        if(sucesso == 1){
            printf("Bem vindo(a) %s!\n\n", usuario_temp);
            printf("-------------------------------\n\n");
            printf("0 - Menu Inicial: ");

            while(menu != 0)
                scanf("%d", &menu);

            system("cls");
        } else {
            printf("Usuario ou senha incorretos!\n\n");
            printf("-------------------------------\n\n");
            printf("0 - Menu Inicial\n1 - Tentar novamente\n\nDigite uma opcao: ");
            scanf("%d", &menu);

            system("cls");
        }
    }

    return 0;
}
