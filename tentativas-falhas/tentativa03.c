#include <stdio.h>
#include <stdlib.h>

struct fichaAlunos
{

    char nomes[50][100];
    char emails[50][100];
    int matriculas[100];
    float A1[100], A2[100], A3[100];
};

void limpaTela()
{
    system("cls");
}

int menuPrincipal()
{
    printf("\n***************************************\n");
    printf("                MENU                       ");
    printf("\n***************************************\n");
    printf("\n 1. Cadastrar aluno");
    printf("\n 2. Listar alunos");
    printf("\n 3. Excluir aluno");
    printf("\n 0. Sair");

    int opcao = 0;

    do
    {
        printf("\n\nInforme a opcao desejada: ");
        scanf("%d", &opcao);
    } while (opcao < 0 || opcao > 3);

    return opcao;
}

void resgistroAlunos(posicao)
{

    for (posicao = 0; posicao < 1; posicao++)
    {

        struct fichaAlunos Alunos[100];
        {

            printf("\n=======================================\n");
            printf("        CADASTRO DE ALUNOS %d   ", posicao + 1);
            printf("\n=======================================\n\n");

            printf(" Nome do aluno: ");
            scanf("%s", &Alunos[100].nomes[posicao]);

            printf("\n Informe seu email: ");
            scanf("%s", &Alunos[100].emails[posicao]);

            printf("\n Digite a matricula do aluno: ");
            scanf("%d", &Alunos[100].matriculas[posicao]);

            printf(" Informe a nota A1: ");
            scanf("%f", &Alunos[100].A1[posicao]);

            printf(" Informe a nota A2: ");
            scanf("%f", &Alunos[100].A2[posicao]);

            printf(" Informe a nota A3: ");
            scanf("%f", &Alunos[100].A3[posicao]);
            
            printf("=========================\n\n");

            return 0;
        }
    }
}

void listagemAlunos(Alunos)
{

}

void excluirAluno()
{
    printf("\nTCHAUUUU\n");
}


int main()
{

    int posicao = 0;
    int opcaoMain = 0;

    do
    {

        limpaTela();

        opcaoMain = menuPrincipal();

        switch (opcaoMain)
        {  
        case 1:
            resgistroAlunos(posicao);
            break;
        case 2:
            listagemAlunos();
            break;
        case 3:
            excluirAluno();
            break;
        default:
            break;
        }

        system("pause");

    } while (opcaoMain != 0);
    
    return 0;
}
