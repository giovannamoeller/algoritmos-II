// Aluna: Giovanna Gimenes Moeller

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

FILE *arqA; FILE *arqB;
char A[50], B[50];

struct Funcionario {
    char nome[50];
    double salario;
} func;

void cadastro() {
    arqA = fopen(A, "ab+");
    if(!arqA) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
    char resp;
    do {
        printf("\nNome: ");
        scanf("%s", func.nome);
        fflush(stdin);
        printf("Salario: ");
        scanf("%lf", &func.salario);
        fflush(stdin);
        fwrite(&func, sizeof(func), 1, arqA);
        printf("\nAdicionar outro funcionario? (s/n): ");
        do {
            scanf("%c", &resp);
        } while(resp != 's' && resp != 'n');
    } while(resp == 's');
    fclose(arqA);
}

void copiaArqA() {
    if ((arqA = fopen(A, "rb")) == NULL && (arqB = fopen(B, "rb")) == NULL) {
        printf("\n Erro de abertura de arquivo");
        exit(1);
    }

    while(fread(&func, sizeof(func), 1, arqA) == 1) {
        fwrite(&func, sizeof(func), 1, arqB);
    }

    fseek(arqB, 0, SEEK_SET);

    while(fread(&func, sizeof(func), 1, arqB) == 1) {
        printf("\nNome: %s", func.nome);
        printf("\nSaldo: %.2lf\n", func.salario);
    }

    fclose(arqA);
    fclose(arqB);
}

int main() {
    printf("Digite o nome do arquivo A: ");
    scanf("%s", A);
    fflush(stdin);
    cadastro();
    printf("Digite o nome do arquivo B: ");
    scanf("%s", B);
    fflush(stdin);
    arqB = fopen(B, "ab+");
    copiaArqA();
}   