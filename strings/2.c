#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* menorPalavra(char *frase, char *palavra) {
    int cont = 0, maior = 0, ini = 0, temp = 0;
    int tamanho = strlen(frase);
    int menor = 201;
    for(int i = 0; i <= tamanho; i++) {
        if(i == tamanho || frase[i] == ' ') { // se a frase terminou ou a palavra terminou
            if(menor > cont) {
                menor = cont;
                ini = temp;
            }
            cont = 0;
            temp = i + 1;
        } else { cont++; }
    }
    int i, j = 0;
    for(i = ini; i < ini + menor; i++) {
        palavra[j] = frase[i];
        j++;
    }
    palavra[j] = '\0';
    return palavra;
}

int main() {
    char frase[200], palavra[200];
    int op;
    fflush(stdin);
    printf("Digite uma frase: "); 
    gets(frase);
    printf("A menor palavra da frase eh: %s\n\n", menorPalavra(frase, palavra));
    printf("Digite 1 para reprocessar ou 0 para sair: ");
    scanf("%d", &op);
    while (op != 1 && op != 0) {
        printf("Comando errado. Digite novamente: ");
        scanf("%d", &op);
    }
    if(op == 0) {
        exit(1);
    } else { main(); }
}