#include <stdio.h>

int main () {

    int i, j, N, M;
    int somaLinhas;


    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &N);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &M);

    int mat[N][M];
    int vet[N];

    for (i = 0; i < N; i++) {
            printf("Digite os elementos da %da linha:\n", i+1);
        for (j = 0; j < M; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    somaLinhas = 0;

    for (i = 0; i < N; i++) {
            vet[i] = 0;
            somaLinhas = 0;
        for (j = 0; j < M; j++) {
            somaLinhas = somaLinhas + mat[i][j];
        }
        vet[i] = somaLinhas;
    }

    printf("VETOR GERADO:\n");

    for (i = 0; i < N; i++) {
        printf("%d\n", vet[i]);
    }


    return 0;
}
