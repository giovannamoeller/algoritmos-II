#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vogal(char frase[200]) {
    int cont = 0;
    int tamanho = strlen(frase);
    for(int i = 0; i <= tamanho; i++) {
        if(i == tamanho || frase[i] == ' ') { // se a frase terminou ou a palavra terminou
            if(frase[i - 1] == 'a' || frase[i - 1] == 'e' || frase[i - 1] == 'i' || frase[i - 1] == 'o' || frase[i - 1] == 'u') {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    char frase[200];
    int op;
    printf("Digite uma frase: "); 
    gets(frase);
    printf("A quantidade de palavras terminadas com vogal eh: %d\n\n", vogal(frase));
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