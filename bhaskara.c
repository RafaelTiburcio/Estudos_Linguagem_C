#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0 || a == 0) {
        printf("Essa equacao nao possui raizes reais.\n");
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Delta = %.4lf\n", delta);
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
    }

    return 0;
}
