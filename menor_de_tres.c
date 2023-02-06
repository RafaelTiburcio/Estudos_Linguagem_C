#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, menor;

    menor = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite um valor inteiro: ");
    scanf("%d", &b);
    printf("Digite um valor inteiro: ");
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("MENOR = %d", a);
    }
    else if ( b < c) {
        printf("MENOR = %d", b);
    }
    else {
        printf("MENOR = %d", c);
    }




    return 0;
}
