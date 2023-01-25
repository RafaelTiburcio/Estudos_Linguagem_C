#include <stdio.h>
#include <string.h>


int main() {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite a idade do funcionario: ");
    scanf("%d", &idade);

    printf("Digite a altura do funcionario: ");
    scanf("%lf", &altura);

    printf("Digite o  primeiro nome do funcionario: ");
    scanf("%s", nome);

    printf("Informe o salario do funcionario: ");
    scanf("%lf", &salario);

    printf("idade = %d anos\n", idade);
    printf("Altura = %.2lf M\n", altura);
    printf("Nome = %s\n", nome);
    printf("Salario = R$ %.2lf", salario);

    return 0;

}
