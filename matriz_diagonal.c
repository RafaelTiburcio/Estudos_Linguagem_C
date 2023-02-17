#include <stdio.h>

int main()
{

    int N, i, j, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat [N] [N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("ELEMENTO [%d, %d]: ", i, j);
            scanf("%d", &mat[i] [j]);
        }
    }

    printf("\nNumeros negativos:\n");
    cont = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat [i] [j] < 0) {
            printf("%d  ", mat[i] [j]);
            cont = cont + 1;
            }
        }
    }

    printf("\nQuantidade de negativos: %d\n", cont);
    printf("Diagonal principal:\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
            printf("%d  ", mat[i] [j]);
            }
        }
    }






    return 0;
}
