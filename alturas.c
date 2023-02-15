#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar ()) != '\n' && c != EOF) {}
}

int main () {

    int N, i;
    double soma, media, contador, corte;


    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes[N] [50];
    int idades[N];
    double alturas[N];

    for (i = 0; i < N; i++) {
        printf("DADOS DA %da pessoa\n", i + 1);
        printf("NOME: ");
        limpar_entrada();
        gets(nomes[i]);
        printf("IDADE: ");
        scanf("%d", &idades[i]);
        printf("ALTURA: ");
        scanf("%lf", &alturas[i]);

    }

    soma = 0;
    media = 0;

    for (i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }

    contador = 0;

    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            contador = contador + 1;
        }
    }

    corte = contador * 100.0 / N;

    media = soma / N;

    printf("\nAltura media: %.2lf\n", media);
    printf("porcentagem de pessoas menores de 16 anos: %.1lf %%\n", corte);

    for (i = 0; i < N; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }







    return 0;
}
