#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char endereco[50];
    char telefone[20];
} Pessoa;


int main() {
    char aux[30];
    Pessoa pessoa[30];
    for(int i = 0; i < 30; i++) {
        fflush(stdin);
        printf("Nome: ");
        scanf("%s", &pessoa[i].nome);
        printf("Endereco: ");
        scanf("%s", &pessoa[i].endereco);
        printf("Telefone: ");
        scanf("%s", &pessoa[i].telefone);
    }
    for(int i = 0; i < 30; i++) {
        for(int j = 0; j < 30; j++) {
            if(strcmp(pessoa[i].nome, pessoa[j].nome) < 0) { // string1 menor que string2
                strcpy(aux, pessoa[i].nome);
                strcpy(pessoa[i].nome, pessoa[j].nome);
                strcpy(pessoa[j].nome, aux);
		    }
        }
    }

    for(int i = 0; i < 30; i++) {
        printf("\nNome: %s\n", pessoa[i].nome);
        printf("Endereco: %s\n", pessoa[i].endereco);
        printf("Telefone: %s\n", pessoa[i].telefone);
    }
    
}   