// Aluna: Giovanna Gimenes Moeller
// Notas = 100, 50, 20, 10, 5, 2
// Moedas = 1, 0.5, 0.25, 0.1, 0.01

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#define hash "d41d8cd98f00b204e9800998ecf8427e"

void geraCheque(double valor) {

}

void geraNotas(double valor) {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    double parte_inteira = floor(valor);
    int inteiro = (int)parte_inteira;

    a = inteiro / 100; b = inteiro % 100;
    c = b / 50; d = b % 50; 
    e = d / 20; f = d % 20;
    g = f / 10; h = f % 10;
    i = h / 5; j = h % 5;
    k = j / 2; l = j % 2;
    m = l / 1; n = l % 1;

    printf("\n\n");
    if(a != 0) printf("%d nota(s) de R$ 100,00\n", a);
    if(c != 0) printf("%d nota(s) de R$ 50,00\n", c);
    if(e != 0) printf("%d nota(s) de R$ 20,00\n", e);
    if(g != 0) printf("%d nota(s) de R$ 10,00\n", g);
    if(i != 0) printf("%d nota(s) de R$ 5,00\n", i);
    if(k != 0) printf("%d nota(s) de R$ 2,00\n", k);
    printf("\n");

    double o, p, q, r, s, t, u, v, x, z;
    double decimal = valor - parte_inteira;

    o = (decimal * 100) / 50; p = (int) (decimal * 100) % (int) 50;
    q = p / 25; r = (int) p % (int) 25;
    s = r / 10; t = (int) r % (int) 10;
    if((int)m != 0) printf("%d moeda(s) de R$ 1.00\n", (int)m);
    if((int)o != 0)printf("%d moeda(s) de R$ 0.50\n", (int)o);
    if((int)q != 0)printf("%d moeda(s) de R$ 0.25\n", (int)q);
    if((int)s != 0)printf("%d moeda(s) de R$ 0.10\n", (int)s);
    if((int)t != 0)printf("%d moeda(s) de R$ 0.01\n", (int)t);
}

void getSenha() {
    char senha[50];
    printf("Digite a senha para utilizar o programa: ");
    gets(senha);
    while(strcmp(senha, hash) != 0) {
        printf("Senha incorreta! Digite novamente: ");
        gets(senha);
    }
}

int main() {
    fflush(stdin);
    double valor;
    char senha[50];
    int op = 4;

    getSenha();

    while(op != 3) {
        printf("\n\n\t\tBEM VINDO");
        printf("\n1 - Receber dinheiro em notas/moedas");
        printf("\n2 - Preencher cheque");
        printf("\n3 - Sair do sistema");
        printf("\n\nDigite sua opcao: ");
        scanf("%d", &op);

        while(op != 1 && op != 2 && op != 3) {
            printf("Comando errado. Digite novamente: ");
            scanf("%d", &op);
        }
        if(op == 1 || op == 2) {
            printf("\n\nDigite o valor: ");
            scanf("%lf", &valor);
            if(op == 1) geraNotas(valor);
            else geraCheque(valor);
        } else exit(1);
    }

}