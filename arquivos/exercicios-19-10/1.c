// Aluna: Giovanna Gimenes Moeller

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define max 5

FILE *arq;

struct ContaCorrente {
    char conta[10];
    char nome[50];
    double saldo;
    char data[15];
} conta;

void altera() {
    int pos;
    fseek(arq, 0, SEEK_SET); 
    char num[10];
    arq = fopen("clientes.dat", "rb+");
    if(!arq) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
    printf("Digite o numero da conta que queira alterar: ");
    scanf("%s", num);

    while(fread(&conta, sizeof(conta), 1, arq) == 1) {
        if(strcmp(conta.conta, num) == 0) {
            pos = ftell(arq);
            printf("Nome: ");
            scanf("%s", conta.nome);
            fflush(stdin);
            printf("Saldo: ");
            scanf("%lf", &conta.saldo);
            fflush(stdin);
            printf("Data da ultima operacao: ");
            scanf("%s", conta.data);
            fflush(stdin);
            fseek(arq, pos-sizeof(conta), SEEK_SET);
            fwrite(&conta, sizeof(conta), 1, arq); 
            fflush(arq); 
        }
    }
    //fclose(arq);
}

void cadastro() {
    arq = fopen("clientes.dat", "ab");
    if(!arq) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
    char resp;
    do {
        fflush(stdin);
        printf("\nNumero da conta: ");
        scanf("%s", conta.conta);
        printf("Nome do cliente: ");
        scanf("%s", conta.nome);
        printf("Saldo: ");
        scanf("%lf", &conta.saldo);
        printf("Data da ultima operacao mm/dd/aaaa: ");
        scanf("%s", conta.data);
        fwrite(&conta, sizeof(conta), 1, arq);
        printf("\nAdicionar outro cliente? (s/n): ");
        do {
            scanf("%c", &resp);
        } while(resp != 's' && resp != 'n');
    }while(resp == 's');
    fclose(arq);
}

void lerArquivo() {
    if ((arq = fopen("clientes.dat", "rb")) == NULL) {
        printf ("\n Erro de abertura de arquivo");
        exit(1);
    }

    while(fread(&conta, sizeof(conta), 1, arq) == 1) {
        printf("\nNumero da conta: %s\n", conta.conta);
        printf("Nome: %s\n", conta.nome);
        printf("Saldo: %.2lf\n", conta.saldo);
        printf("Data da ultima operacao: %s\n", conta.data);
    }
    fclose(arq);
}

void saldoNegativo() {
    if ((arq = fopen("clientes.dat", "rb")) == NULL) {
        printf ("\n Erro de abertura de arquivo");
        exit(1);
    }

    int cont = 0;
    while(fread(&conta, sizeof(conta), 1, arq) == 1) {
        if(conta.saldo < 0) {
            cont++;
            printf("\nNumero da conta: %s\n", conta.conta);
            printf("Nome: %s\n", conta.nome);
            printf("Saldo: %.2lf\n", conta.saldo);
            printf("Data da ultima operacao: %s\n", conta.data);
        }
    }
    if(cont == 0) {
        printf("\nNenhum registro encontrado.\n");
    }

    fclose(arq);
}

int main() {
    int op = -1;
    while(op != 5) {
        printf("\n\t\tMENU\n\n");
        printf("1. Cadastro de clientes\n2. Consulta\n3. Consulta saldo negativo\n4. Alteracao de dados\n5. Sair");
        printf("\n\nDigite sua opcao: ");
        scanf("%d", &op);
        while(op < 1 || op > 5) {
            printf("Comando incorreto. Digite novamente: ");
            scanf("%d", &op);
        }
        switch(op) {
            case 1: cadastro(); break;
            case 2: lerArquivo(); break;
            case 3: saldoNegativo(); break;
            case 4: altera(); break;
            case 5: exit(1); break;
        }
    }
}   