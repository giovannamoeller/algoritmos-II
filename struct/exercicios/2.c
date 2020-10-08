#include <stdio.h>
#include <string.h>

typedef struct {
  int p, q;
} racional;

void reduz(int a, int b) {
  printf ("Os valores digitados foram: %d/%d\n\n", a,b);
}

void neg(int a, int b) {
  if (a < 0) {
		printf ("Valor negado: %d/%d\n\n", -a, b);
	}
	else {
		printf ("Valor negado: -%d/%d\n\n", a, b);
	}
}

void somaDef(int mmc, int a, int b, int c, int d, int num1, int num2) {
	int primeiro, segundo;
	primeiro = (mmc/b)*a;
	segundo = (mmc/d)*c;
	printf ("A soma entre %d/%d+%d/%d e igual a: %d/%d\n\n", a, b, c, d, primeiro+segundo, mmc);
}

void mmc(int num1, int num2, int a, int c) {
    int resto, b, d, mmc, aux, i;
    b = num1;
    d = num2;
    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    somaDef(mmc, a, b, c, d, num1, num2);
}

void soma(int a, int b) {
  int c, d;
	printf ("Digite a outra fracao que deseja somar por %d/%d: ", a, b);
	scanf("%d %d", &c, &d);
	mmc(b, d, a, c);
}

void mult(int a, int b) {
  int c, d;
	printf ("Digite a outra fracao que deseja multiplicar por %d/%d: ", a, b);
	scanf("%d %d", &c, &d);
	printf ("A divisao entre %d/%d/ e %d/%d e igual a: %d/%d\n\n", a, b, c, d, a*c, b*d);
}

void div(int a, int b) {
  int c, d;
	printf ("Digite a outra fracao que deseja dividir por %d/%d: ", a, b);
	scanf("%d %d", &c, &d);
	printf ("A divisao entre %d/%d/ e %d/%d e igual a: %d/%d\n\n", a, b, c, d, a*d, b*c);
}


int main() {
    racional rac;
    printf("Digite o numerador: ");
    scanf("%d", &rac.p);
    do {
      printf("Digite o denominador: ");
      scanf("%d", &rac.q);
    }while (rac.q < 0);

    reduz(rac.p, rac.q);
    neg(rac.p, rac.q);
    soma(rac.p, rac.q);
    mult(rac.p, rac.q);
    div(rac.p, rac.q);

}