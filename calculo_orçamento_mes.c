#include <stdio.h>
#include <string.h>

int main() {

    double x, soma, salario, balanco;

    soma = 0;
    balanco = 0;

    printf("Me informe o seu salario: ");
    scanf("%lf", &salario);
    printf("Digite um valor a ser inserido nas despesas: ");
    scanf("%lf", &x);

    while (x != 0) {
        soma = soma + x;
        printf("Digite um valor: ");
        scanf("%lf", &x);
    }

    balanco = salario - soma;

    printf("Valor das despesas: R$%.2lf\n", soma);
    printf("Salario mensal: R$%.2lf\n", salario);

    if (salario < soma) {
        printf("ATENCAO! Seu salario nao cobre suas despesas!\n");
    }
    else {
        printf("Balanco mensal: R$%.2lf", balanco);
    }





    return 0;
}
