// Aluna: Giovanna Gimenes Moeller

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 2

typedef struct {
    char conta[10];
    char nome[50];
    double saldo;
    char data[15];
} ContaCorrente;
ContaCorrente conta[3];

void cadastro() {
    for (int i = 0; i < max; i++) {
        fflush(stdin);
        printf("\nNumero da conta: ");
        scanf("%s", conta[i].conta);
        printf("Nome do cliente: ");
        scanf("%s", conta[i].nome);
        printf("Saldo: ");
        scanf("%lf", &conta[i].saldo);
        printf("Data da ultima operacao mm/dd/aaaa: ");
        scanf("%s", conta[i].data);
    }
}

void ordemAlfabetica() {
    printf("\n\t\tOrdem alfabética\n");
    char aux[50];
    int i, j;
    for(i = 0; i < max; i++) {
        for(j = 0; j < max; j++) {
            if(strcmp(conta[i].nome, conta[j].nome) < 0) {
                strcpy(aux, conta[i].nome);
                strcpy(conta[i].nome, conta[j].nome);
                strcpy(conta[j].nome, aux);
		    }
        }
    }
    for(i = 0; i < max; i++) {
        printf("\nNumero da conta: %s\n", conta[i].conta);
        printf("Nome: %s\n", conta[i].nome);
        printf("Saldo: %.2lf\n", conta[i].saldo);
        printf("Data da ultima operacao: %s\n", conta[i].data);
    }
    printf("\n--------------------------------------");
}

void dataOperacao() {
    printf("\n\t\tData de operacao\n");
    char data_op[15];
    printf("\nDigite a data de operacao desejada: ");
    scanf("%s", data_op);
    int i, cont = 0;
    for(i = 0; i < max; i++) {
        if(strcmp(data_op, conta[i].data) == 0) {
            cont++;
            printf("\nNumero da conta: %s\n", conta[i].conta);
            printf("Nome: %s\n", conta[i].nome);
            printf("Saldo: %.2lf\n", conta[i].saldo);
            printf("Data da ultima operacao: %s\n", conta[i].data);
        }
    }
    if(cont == 0) {
        printf("\nNenhum registro encontrado.");
    }
    printf("\n--------------------------------------");
}   

void saldoNegativo() {
    printf("\n\t\tSaldo negativo\n");
    int i, cont = 0;
    for(i = 0; i < max; i++) {
        if(conta[i].saldo < 0) {
            cont++;
            printf("\nNumero da conta: %s\n", conta[i].conta);
            printf("Nome: %s\n", conta[i].nome);
            printf("Saldo: %.2lf\n", conta[i].saldo);
            printf("Data da ultima operacao: %s\n", conta[i].data);
        }
    }
    if(cont == 0) {
        printf("\nNenhum registro encontrado.");
    }
    printf("\n--------------------------------------");
}


int main() {
    int op = -1;
    while(op != 5) {

        printf("\n\t\tMENU\n\n");
        printf("1. Cadastro de clientes\n2. Consulta de nomes por ordem alfabética\n3. Consulta de clientes fornecendo data de operacao\n4. Consulta de clientes com saldo negativo\n5. Sair");
        printf("\n\nDigite sua opcao: ");
        scanf("%d", &op);
        while(op < 1 || op > 6) {
            printf("Comando incorreto. Digite novamente: ");
            scanf("%d", &op);
        }
        switch(op) {
            case 1: cadastro(); break;
            case 2: ordemAlfabetica(); break;
            case 3: dataOperacao(); break;
            case 4: saldoNegativo(); break;
            case 5: exit(1); break;
        }
    }
}   