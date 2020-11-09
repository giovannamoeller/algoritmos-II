// Aluna: Giovanna Gimenes Moeller

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

FILE *arq;

struct Produtos {
    int codigo;
    char desc[50];
    double preco;
} produto;

void altera() {
    int pos;
    int num, achou = 0;
    arq = fopen("produtos.dat", "r+b");
    if(!arq) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }

    printf("Digite o codigo do produto que queira alterar: ");
    scanf("%d", &num);

    while(fread(&produto, sizeof(produto), 1, arq) == 1 && !achou) {
        if(produto.codigo == num) {
            fflush(stdin);
            printf("Descricao: ");
            gets(produto.desc);
            fflush(stdin);
            printf("Preco: ");
            scanf("%lf", &produto.preco);

            fseek(arq, -sizeof(produto), SEEK_CUR);
            fwrite(&produto, sizeof(produto), 1, arq); 
            fflush(arq);
            achou = 1;
        }
    }
    if(!achou) {
        printf("\nNao foi encontrado nenhum produto com esse codigo\n");
    }
    fclose(arq);
}

void cadastro() {
    arq = fopen("produtos.dat", "ab");
    if(!arq) {
        printf("Erro na abertura do arquivo.");
        exit(1);
    }
    char resp;
    do {
        printf("\nCodigo do produto: ");
        scanf("%d", &produto.codigo);
        fflush(stdin);
        printf("Descricao: ");
        gets(produto.desc);
        fflush(stdin);
        printf("Preco: ");
        scanf("%lf", &produto.preco);
        fwrite(&produto, sizeof(produto), 1, arq);
        printf("\nAdicionar outro produto? (s/n): ");
        do {
            scanf("%c", &resp);
        } while(resp != 's' && resp != 'n');
    }while(resp == 's');
    fclose(arq);
}

void consulta() {
    if ((arq = fopen("produtos.dat", "rb")) == NULL) {
        printf ("\n Erro de abertura de arquivo");
        exit(1);
    }

    int cont = 0;
    while(fread(&produto, sizeof(produto), 1, arq) == 1) {
        if(produto.preco > 500) { 
            cont++;
            printf("\nCodigo do produto: %d\n", produto.codigo);
            printf("Descricao: %s\n", produto.desc);
            printf("Valor: %.2lf\n", produto.preco);
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
        printf("1. Cadastro de produtos\n2. Consulta preco superior a 500,00\n3. Alteracao de produto\n4. Sair");
        printf("\n\nDigite sua opcao: ");
        scanf("%d", &op);
        while(op < 1 || op > 4) {
            printf("Comando incorreto. Digite novamente: ");
            scanf("%d", &op);
        }
        switch(op) {
            case 1: cadastro(); break;
            case 2: consulta(); break;
            case 3: altera(); break;
            case 4: exit(1); break;
        }
    }
}   