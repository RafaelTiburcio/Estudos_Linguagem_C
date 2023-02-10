#include <stdio.h>


int main() {

    int i, n1, n2, troca, soma_impar;

    printf("Digite dois numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    soma_impar = 0;

    if (n1 > n2) {
        troca = n1;
        n1 = n2;
        n2 = troca;
    }

    for (i = n1+ 1; i < n2; i++) {
        if (i % 2 != 0) {
            soma_impar = soma_impar + i;
            printf("%d\n",i);

        }
    }

    printf("SOMA DOS IMPARES = %d", soma_impar);






    return 0;
}
