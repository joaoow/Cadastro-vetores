#include <stdio.h>
#include <stdlib.h>

// Autor: João

// Essa matriz vai armazenar os nomes das pessoas
// 200 É a quantid\de de linhas e 50 é a quantidade de colunas
// Define SIZE 200
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;

void cadastro();

int main(void){
    cadastro();
}
    void cadastro(){
        static int linha;
        do{
            printf("\nDigite seu nome: ");
            scanf("%s". &nome[linha]);
            printf("\nDigite seu email: ");
            scanf("%s", &email[linha]);
            printf("\nDigite o cpf: ");
            scanf("%d", &cpf[linha]);
            printf("\nDigite 1 para continuar ou outro valor para sair ");
            scanf("%d", &op);
            linha++;
        }while(op==1);
    }

    return 0;
}

//linha ++, sempre que eu continuar digitando outros valores de outras pessoas ele fica armazenando na linha 0
// Eu quero que a proxima vez que eu continuar cadastrando ou executar o codigo dnv
//eu quero que ele mude pra linha seguinte ou seja para proxima linha
// por isso o linha++
