#include <stdio.h>

int main() {

    int i, j, N, indice, indiceColuna, raiz;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat [N][N];
    int matQuadrada [N][N];

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("ELEMENTO [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Numeros positivos:\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] > 0) {
                printf("%d, ", mat[i][j]);
            }
        }
    }

    printf("\nDigite a linha da matriz que deseja consultar: ");
    scanf("%d", &indice);

    for (i = indice - 1; i <= indice - 1; i++) {
        for (j = 0; j < N; j++) {
            printf("%d, ", mat[i][j]);
        }
    }

    printf("\nDigite a coluna da matriz que deseja consultar: ");
    scanf("%d", &indiceColuna);

    for (i = 0; i < N; i++) {
        for (j = indiceColuna - 1; j <= indiceColuna - 1; j++) {
            printf("%d, ", mat[i][j]);
        }
    }

    printf("\nELEMENTOS DA DIAGONAL PRINCIPAL:\n");

    for (i = 0; i < N; i++) {
        printf("%d, ", mat[i][i]);
        }

    raiz = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matQuadrada[i][j] = mat[i][j];
            if (mat[i][j] < 0) {
                raiz = mat[i][j] * mat[i][j];
                matQuadrada[i][j] = raiz;
            }
        }
    }

    printf("\nMATRIZ QUADRADA GERADA COM OS NUMEROS NEGATIVOS:\n");

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d, ", matQuadrada[i][j]);
        }
        printf("\n");
    }



    return 0;
}
