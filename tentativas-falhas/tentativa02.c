#include <stdio.h>
#include <stdlib.h>

//---------- FUNÇÕES FORA DA MAIN --------------

void topoRegistro(posicao) {
    printf("\n=======================================\n");
    printf("        CADASTRO DE ALUNOS  %d  ", posicao = 1);
    printf("\n=======================================\n");
}

void registroAlunos(nome, email, matricula, A1, A2, A3, posicao) {

    for (int posicao = 0; posicao < 1; posicao++)
    {
    
    topoRegistro();

    printf("\n Informe o seu nome: ");
    scanf("%s", nome[posicao]);
    printf(" Informe o seu email: ");
    scanf("%s", email[posicao]);
    printf(" Informe o seu numero de matricula: ");
    scanf("%d", &matricula[posicao]);
    printf(" Informe a sua nota na A1: ");
    scanf("%f", &A1[posicao]);
    printf(" Informe a sua nota na A2: ");
    scanf("%f", &A2[posicao]);
    printf(" Informe a sua nota na A3: ");
    scanf("%f", &A3[posicao]);

    rodaPeRegistro();

    printf (" Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n", nome[posicao], email[posicao], matricula[posicao], A1[posicao], A2[posicao], A3[posicao]);

    rodaPeRegistro();

    }



void rodaPeRegistro() {
    printf("\n---------------------------------------\n\n");
    }
}

int menuPrincipal() {
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

void topoSituacao() {
    printf("************** SITUACAO ***************\n");
}           

void rodaPeSituacao() {
    printf("\n***************************************");
}

//----------------------------------------------

int main() {

// ------- VARIÁVEIS ----------
char nome[50][100];
char email[50][100];
int matricula[100];
float A1[100], A2[100], A3[100];

int posicao = 0;
int opcaoMain = 0;

// -------------------------------

opcaoMain = menuPrincipal();

// Estrutura condicional 


do
{
    switch (opcaoMain)
{
case 1:

for (int posicao = 0; posicao < 1; posicao++)
    {
    
    topoRegistro();

    printf("\n Informe o seu nome: ");
    scanf("%s", nome[posicao]);
    printf(" Informe o seu email: ");
    scanf("%s", email[posicao]);
    printf(" Informe o seu numero de matricula: ");
    scanf("%d", &matricula[posicao]);
    printf(" Informe a sua nota na A1: ");
    scanf("%f", &A1[posicao]);
    printf(" Informe a sua nota na A2: ");
    scanf("%f", &A2[posicao]);
    printf(" Informe a sua nota na A3: ");
    scanf("%f", &A3[posicao]);

    rodaPeRegistro();

    printf (" Nome: %s\n Email: %s\n Matricula: %d\n A1: %.1f\n A2: %.1f\n A3: %.1f\n", nome[posicao], email[posicao], matricula[posicao], A1[posicao], A2[posicao], A3[posicao]);

    rodaPeRegistro();

    }
    break;

default:
    break;
}


} while (opcaoMain != 0);












// ----- PREENCHIMENTO DE REGISTRO E IMPRESSÃO DO MESMO --------






// ---------------------------------------------------------------

topoSituacao();

// ------ Cálculo da Média Final ---------

/*

float finalA1 = A1[0] * 0.20;
float finalA2 = A2[0] * 0.30; 
float finalA3 = A3[0] * 0.50;

float media = finalA1 + finalA2 + finalA3;
float mediaFinal = media;
printf("Nota Final = %.1f\n", mediaFinal);

if (mediaFinal < 7) {
    printf("REPROVAD0(A)");
} else {
    printf("APROVADO(A)");
}

//----------------------------------

*/ 

rodaPeSituacao();



} // --> FIM DA FUNÇÃO MAIN 
