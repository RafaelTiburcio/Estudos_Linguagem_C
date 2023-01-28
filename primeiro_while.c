#include <stdio.h>
#include <string.h>

int main() {

    int soma, x;

    soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    while (x != 0) {
        soma = soma + x;
        printf("Digite outro numero: ");
        scanf("%d", &x);
    }

    printf("SOMA = %d\n", soma);


    return 0;
}
