#include <stdio.h>
#include <string.h>

typedef struct empregado {
    char nome[30];
    char sobrenome[50];
    char data_nasc[20];
    char rg[15];
    char data_admissao[20];
    double salario;
} funcionario;


int main() {
    int num;
    printf("Digite o numero de empregados da empresa: ");
    scanf("%d", &num);
    funcionario func[num];
    for(int i = 0; i < num; i++) {
        fflush(stdin);
        printf("Nome: ");
        scanf("%s", &func[i].nome);
        printf("Sobrenome: ");
        scanf("%s", &func[i].sobrenome);
        printf("Data de Nascimento dd/mm/aaaa: ");
        scanf("%s", &func[i].data_nasc);
        printf("RG: ");
        scanf("%s", &func[i].rg);
        printf("Data de admissao: dd/mm/aaaa: ");
        scanf("%s", &func[i].data_admissao);
        printf("Salario: ");
        scanf("%lf", &func[i].salario);
    }
    for(int i = 0; i < num; i++) {
        printf("\nNome: %s\n", func[i].nome);
        printf("Sobrenome: %s\n", func[i].sobrenome);
        printf("Data de nascimento: %s\n", func[i].data_nasc);
        printf("RG: %s\n", func[i].rg);
        printf("Data de admissao: %s\n", func[i].data_admissao);
        printf("Salario: %.2lf\n\n", func[i].salario);
    }
    
}