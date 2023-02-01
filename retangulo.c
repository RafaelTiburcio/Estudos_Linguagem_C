#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar ()) != '\n' && c != EOF) {}
}

int main() {

    double base, altura, area, perimetro, diagonal;
    char resp;

    do {
        printf("Base do retangulo: ");
        scanf("%lf", &base);
        printf("Altura do retangulo: ");
        scanf("%lf", &altura);
        area = base * altura;
        perimetro = 2 *(base + altura);
        diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));
        printf("AREA = %.4lf\n", area);
        printf("PERIMETRO = %.4lf\n", perimetro);
        printf("DIAGONAL = %.4lf\n", diagonal);
        printf("/nDeseja repetir? (s/n)\n");
        limpar_entrada();
        scanf("%c", &resp);
    } while (resp == 's');





    return 0;
}
