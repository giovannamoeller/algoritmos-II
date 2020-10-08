// Aluna: Giovanna Gimenes Moeller
// Notas = 100, 50, 20, 10, 5, 2
// Moedas = 1, 0.5, 0.25, 0.1, 0.01

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define hash "d41d8cd98f00b204e9800998ecf8427e" // professora essa é a senha!!!

char valorCheque[20], valorDinheiro[20], valorMoedas[20], imprimir[200], imprimirMoedas[200];
int cont = 0, contMoeda = 0, b, a;

void coin_und() {
    switch(valorMoedas[a]) {
        case '1': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " um "); break;
        case '2': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " dois "); break;
        case '3': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " tres "); break;
        case '4': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " quatro "); break;
        case '5': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " cinco "); break;
        case '6': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " seis "); break;
        case '7': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " sete "); break;
        case '8': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " oito "); break;
        case '9': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " nove "); break;
    }
}

void coin_dez() {
    if(valorMoedas[a] == '1') {
        switch(valorMoedas[a - 1]) {
            case '0': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " dez "); break;
            case '1': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " onze "); break;
            case '2': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " doze "); break;
            case '3': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " treze" ); break;
            case '4': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " catorze "); break;
            case '5': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " quinze "); break;
            case '6': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " dezesseis "); break;
            case '7': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " dezessete "); break;
            case '8': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " dezoito "); break;
            case '9': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " dezenove "); break;
        }
    } else {
        switch(valorMoedas[a]) {
            case '2': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " vinte "); break;
            case '3': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " trinta "); break;
            case '4': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " quarenta "); break;
            case '5': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " cinquenta "); break;
            case '6': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " sessenta "); break;
            case '7': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " setenta "); break;
            case '8': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " oitenta "); break;
            case '9': if(contMoeda>=2) strcat(imprimirMoedas, "e"); strcat(imprimirMoedas, " noventa "); break;
        }
    }
}

void um() {
    switch(valorDinheiro[b]) {
        case '1': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " um "); break;
        case '2': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " dois "); break;
        case '3': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " tres "); break;
        case '4': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " quatro "); break;
        case '5': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " cinco "); break;
        case '6': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " seis "); break;
        case '7': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " sete "); break;
        case '8': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " oito "); break;
        case '9': if(cont>=2 && valorDinheiro[b + 1] != '0') strcat(imprimir, "e"); strcat(imprimir, " nove "); break;
    }
}

void dois() {
    if(valorDinheiro[b] == '1') {
        switch(valorDinheiro[b - 1]) {
            case '0': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " dez "); break;
            case '1': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " onze "); break;
            case '2': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " doze "); break;
            case '3': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " treze" ); break;
            case '4': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " catorze "); break;
            case '5': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " quinze "); break;
            case '6': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " dezesseis "); break;
            case '7': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " dezessete "); break;
            case '8': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " dezoito "); break;
            case '9': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " dezenove "); break;
        }
    } else {
        switch(valorDinheiro[b]) {
            case '2': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " vinte "); break;
            case '3': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " trinta "); break;
            case '4': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " quarenta "); break;
            case '5': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " cinquenta "); break;
            case '6': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " sessenta "); break;
            case '7': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " setenta "); break;
            case '8': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " oitenta "); break;
            case '9': if(cont>=3) strcat(imprimir, "e"); strcat(imprimir, " noventa "); break;
        }
    }
}

void tres() {
    switch(valorDinheiro[b]) {
        case '1': if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir, " cem "); else strcat(imprimir, " cento "); break;
        case '2': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " duzentos "); break;
        case '3': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " trezentos "); break;
        case '4': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " quatrocentos "); break;
        case '5': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " quinhentos "); break;
        case '6': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " seiscentos "); break;
        case '7': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " setecentos "); break;
        case '8': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " oitocentos "); break;
        case '9': if(cont>=4) strcat(imprimir, "e"); strcat(imprimir, " novecentos "); break;
    }
}

void quatro() {
    switch(valorDinheiro[b]) {
        case '1': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " um mil "); break;
        case '2': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " dois mil "); break;
        case '3': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " tres mil "); break;
        case '4': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " quatro mil "); break;
        case '5': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " cinco mil "); break;
        case '6': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " seis mil "); break;
        case '7': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " sete mil "); break;
        case '8': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " oito mil "); break;
        case '9': if(cont>=5) strcat(imprimir, "e"); strcat(imprimir, " nove mil "); break;
    }
}

void cinco() {
    if(valorDinheiro[b-1] == '0' && valorDinheiro[b] == '1') {
        switch(valorDinheiro[b]) {
            case 1: strcat(imprimir, " dez mil "); break;
        }
    } else if(valorDinheiro[b] == '1') {
        switch(valorDinheiro[b-1]) {
            case '1': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," onze mil "); break;
            case '2': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," doze mil "); break;
            case '3': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," treze mil "); break;
            case '4': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," quatorze mil "); break;
            case '5': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," quinze mil "); break;
            case '6': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," dezesseis mil "); break;
            case '7': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," dezessete mil "); break;
            case '8': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," dezoito mil "); break;
            case '9': b--; if(cont>=6) strcat(imprimir,"e"); strcat(imprimir," dezenove mil "); break;
        }
    }
    else{ 
        switch(valorDinheiro[b]){
            case '2': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," vinte "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '3': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," trinta "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '4': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," quarenta "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '5': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," cinquenta "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '6': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," sessenta "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '7': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," setenta "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '8': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," oitenta "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
            case '9': if(cont>=7) strcat(imprimir,"e"); strcat(imprimir," noventa "); if((valorDinheiro[b-1])=='0') strcat(imprimir,"mil "); break;
      }           
    }

}

void seis() {
    switch(valorDinheiro[b]) {
        case '1': if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir, " cem mil"); else strcat(imprimir, " cento "); break;
        case '2':strcat(imprimir," duzentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '3':strcat(imprimir," trezentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '4':strcat(imprimir," quatrocentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '5':strcat(imprimir," quinhentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '6':strcat(imprimir," seiscentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '7':strcat(imprimir," setecentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '8':strcat(imprimir," oitocentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
        case '9':strcat(imprimir," novecentos "); if(valorDinheiro[b - 1] == '0' && valorDinheiro[b - 2] == '0') strcat(imprimir,"mil ");break;
    }

}

void sete() {
    if(cont>=7)
         switch(valorDinheiro[b]) {
            case '1': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," um milhao "); break;
            case '2': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," dois milhoes "); break;
            case '3': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," tres milhoes "); break;
            case '4': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," quatro milhoes "); break;
            case '5': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," cinco milhoes "); break;
            case '6': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," seis milhoes "); break;
            case '7': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," sete milhoes "); break;
            case '8': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," oito milhoes "); break;
            case '9': if(cont>=8) strcat(imprimir,"e"); strcat(imprimir," nove milhoes "); break;
        }     

}

void oito() {
    if(valorDinheiro[b - 1] == '0' && valorDinheiro[b] == '1') {
         switch(valorDinheiro[b]){
            case '1': strcat(imprimir," dez milhoes "); break;       
        }
     }
     else if (valorDinheiro[b] == '1') {          
         switch(valorDinheiro[b - 1]) {
            case '1': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," onze milhoes "); break;
            case '2': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," doze milhoes "); break;
            case '3': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," treze milhoes "); break;
            case '4': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," quatorze milhoes "); break;
            case '5': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," quinze milhoes "); break;
            case '6': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," dezesseis milhoes "); break;
            case '7': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," dezessete milhoes "); break;
            case '8': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," dezoito milhoes "); break;
            case '9': b--; if(cont>=9) strcat(imprimir,"e"); strcat(imprimir," dezenove milhoes "); break;
        }
    }
    else { 
        switch(valorDinheiro[b]){
            case '2': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," vinte "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '3': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," trinta "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '4': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," quarenta "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '5': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," cinquenta "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '6': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," sessenta "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '7': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," setenta "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '8': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," oitenta "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
            case '9': if(cont>8) strcat(imprimir,"e"); strcat(imprimir," noventa "); if((valorDinheiro[b - 1]) == '0') strcat(imprimir, "milhoes "); break;
        } 
    }

}

void nove() {
    switch(valorDinheiro[b]) {
        case '1':if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir," cem milhoes"); else strcat(imprimir," cento "); break;//verifica caso dgito seja um
        case '2':strcat(imprimir," duzentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '3':strcat(imprimir," trezentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '4':strcat(imprimir," quatrocentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '5':strcat(imprimir," quinhentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '6':strcat(imprimir," seiscentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '7':strcat(imprimir," setecentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '8':strcat(imprimir," oitocentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
        case '9':strcat(imprimir," novecentos ");if(valorDinheiro[b - 1]=='0'&&valorDinheiro[b - 2]=='0') strcat(imprimir,"milhoes ");break;
    }

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

void inverterDinheiro(char string[20]){
    char aux;
    int x, y, cont2;
    cont2 = strlen(string);
    y = cont2;
    for (x = 0; x < cont2 / 2; x++){
            y--;  
            aux = valorDinheiro[x];
            valorDinheiro[x] = valorDinheiro[y];
            valorDinheiro[y] = aux;
    }
}

void inverterMoedas(char string[20]){
    char aux;
    int x, y, cont2;
    cont2 = strlen(string);
    y = cont2;
    for (x = 0; x < cont2 / 2; x++){
            y--;  
            aux = valorMoedas[x];
            valorMoedas[x] = valorMoedas[y];
            valorMoedas[y] = aux;
    }
}

int main() {
    fflush(stdin);
    double valor;
    int op = -1;
    //getSenha();
    while(op != 3) {
        printf("\n\n\n\t\tBEM VINDO\n");
        printf("\n1 - Receber dinheiro em notas/moedas");
        printf("\n2 - Preencher cheque");
        printf("\n3 - Sair do sistema");
        printf("\n\nDigite sua opcao: ");
        scanf("%d", &op);

        while(op != 1 && op != 2 && op != 3) {
            printf("Comando errado. Digite novamente: ");
            scanf("%d", &op);
        }

        switch(op) {
            case 1: printf("\nDigite o valor: ");
                    scanf("%lf", &valor);
                    geraNotas(valor);
                    break;
            case 2: printf("\nDigite o valor: ");
                    scanf("%s", valorCheque); // prof, se for colocar moeda coloque com um . ou ,
                    int cont_cheque = strlen(valorCheque);

                    // Separa bits e centBits 
                    for(int i = 0; i <= cont_cheque; i++) {
                        if(valorCheque[i] == ',' || valorCheque[i] == '.'){
                            if(valorCheque[i + 1] != 0) {
                                valorMoedas[0] = valorCheque[i + 1];
                            } else {
                                valorMoedas[0] = '0';
                            }
                            if(valorCheque[i + 2] != 0) {
                                valorMoedas[1] = valorCheque[i + 2];
                            } else {
                                valorMoedas[1] = '0';
                            }
                            break;
                        } 
                        valorDinheiro[i] = valorCheque[i];
                    }

                    cont = strlen(valorDinheiro);
                    inverterDinheiro(valorDinheiro);

                    if(valorDinheiro[0]=='0' && cont <=1 ){
                        strcat(imprimir, "Zero");
                    }

                    for (b = cont; b>=0; b--) {
                        switch(b) {
                            case 0: um(); break;
                            case 1: dois(); break;
                            case 2: tres(); break;
                            case 3: quatro(); break;
                            case 4: cinco(); break;
                            case 5: seis(); break;
                            case 6: sete(); break;
                            case 7: oito(); break;
                            case 8: nove(); break;
                        }
                    }

                    contMoeda = strlen(valorMoedas);
                    inverterMoedas(valorMoedas);
                    for(a = contMoeda; a >= 0; a--) {
                        switch(a) {
                            case 0: coin_und(); break;
                            case 1: coin_dez(); break;
                        }
                    }

                    // Verifica se tem moeda inclusa ou não
                    if(strlen(imprimirMoedas) != 0) {
                        printf("\n%sBits %sCentBits\n\n", imprimir, imprimirMoedas);
                    } else {
                        printf("\n%sBits\n\n", imprimir);
                    }

                    // Zera o valor da string novamente
                    strcpy(imprimir, "");
                    strcpy(imprimirMoedas, "");

                    // Data pelo localtime
                    time_t mytime;
                    mytime = time(NULL);
                    struct tm tm = *localtime(&mytime);
                    printf("Data de preenchimento: %d/%d/%d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

                    break;
            case 3: exit(1);
        }
    }

}