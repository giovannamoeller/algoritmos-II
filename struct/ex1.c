#include <stdio.h>

struct hm {
    int horas;
    int minutos;
};

struct hm horas_minutos;

void calculaHoras(int minutos) {
    horas_minutos.horas = minutos / 60;
    horas_minutos.minutos = minutos % 60;
}

int main() {
    int minutos;
    printf("Digite em minutos: ");
    scanf("%d", &minutos);
    calculaHoras(minutos);
    printf("%d horas e %d minutos", horas_minutos.horas, horas_minutos.minutos);
}