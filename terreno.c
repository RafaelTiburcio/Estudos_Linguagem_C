#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar ()) != '\n' && c != EOF) {}
}

int main() {

    double largura, comprimento, area_terreno, metro_quadrado, valor_terreno;
    char resp;

    area_terreno = 0;

    do {
        printf("Qual a largura do terreno? ");
        scanf("%lf", &largura);
        printf("Qual o comprimento do terreno? ");
        scanf("%lf", &comprimento);
        printf("Digite o valor do metro quadrado: ");
        scanf("%lf", &metro_quadrado);
        area_terreno = largura * comprimento;
        valor_terreno = area_terreno * metro_quadrado;
        printf("Area do terreno: %.2lf\n", area_terreno);
        printf("Valor do terreno: R$ %.2lf\n", valor_terreno);
        printf("Deseja repetir? (s/n) ");
        limpar_entrada();
        scanf("%c", &resp);

    } while (resp == 's');






    return 0;
}
