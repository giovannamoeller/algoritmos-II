// Aluna: Giovanna Gimenes Moeller

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

FILE *arqA; FILE *arqB;
char A[50], B[50];

struct Cliente {
    char telefone[50];
    char cidade[50];
    int tempo;
} cliente;

void cadastroArqA() {
    arqA = fopen(A, "ab+");
    if(!arqA) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
    printf("\nCadastro - Arquivo A\n");
    char resp;
    do {
        printf("\nTelefone: ");
        scanf("%s", cliente.telefone);
        fflush(stdin);
        printf("Cidade: ");
        scanf("%s", cliente.cidade);
        fflush(stdin);
        printf("Tempo de ligacao (em minutos): ");
        scanf("%d", &cliente.tempo);
        fflush(stdin);
        fwrite(&cliente, sizeof(cliente), 1, arqA);
        printf("\nAdicionar outro cliente? (s/n): ");
        do {
            scanf("%c", &resp);
        } while(resp != 's' && resp != 'n');
    } while(resp == 's');
    fclose(arqA);
}

void cadastroArqB() {
    arqB = fopen(B, "ab+");
    if(!arqB) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
    printf("\nCadastro - Arquivo B\n");
    char resp;
    do {
        printf("\nTelefone: ");
        scanf("%s", cliente.telefone);
        fflush(stdin);
        printf("Cidade: ");
        scanf("%s", cliente.cidade);
        fflush(stdin);
        printf("Tempo de ligacao (em minutos): ");
        scanf("%d", &cliente.tempo);
        fflush(stdin);
        fwrite(&cliente, sizeof(cliente), 1, arqB);
        printf("\nAdicionar outro cliente? (s/n): ");
        do {
            scanf("%c", &resp);
        } while(resp != 's' && resp != 'n');
    } while(resp == 's');
    fclose(arqB);
}

void listar() {
    char aux[50];
    if ((arqA = fopen(A, "rb")) == NULL && (arqB = fopen(B, "rb")) == NULL) {
        printf("\n Erro de abertura de arquivo");
        exit(1);
    }

    printf("\nListando telefones em comuns das cidades\n");

    while(fread(&cliente, sizeof(cliente), 1, arqA) == 1) {
        strcpy(cliente.cidade, aux);
        fseek(arqB, 0, SEEK_SET);
        while(fread(&cliente, sizeof(cliente), 1, arqB) == 1) {
            if(strcmp(cliente.cidade, aux) == 0) {
                printf("\nCidade: %s", cliente.cidade);
                printf("\nTelefone: %s", cliente.telefone);
            }   
        }
    }

    fclose(arqA);
    fclose(arqB);
}

int main() {
    printf("Digite o nome do arquivo A: ");
    scanf("%s", A);
    fflush(stdin);
    printf("Digite o nome do arquivo B: ");
    scanf("%s", B);
    fflush(stdin);
    arqB = fopen(B, "ab+");
    cadastroArqA();
    cadastroArqB();
    listar();
}   