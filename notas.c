#include <stdio.h>
#include <math.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar ()) != '\n' && c != EOF) {}
}

int main() {

    double nota1, nota2, media;
    char aluno[50];
    char resp;

    media = 0;

    do {
        printf("Nome do aluno: ");
        gets(aluno);
        printf("Nota 1: ");
        scanf("%lf", &nota1);
        printf("Nota 2: ");
        scanf("%lf", &nota2);

        media = (double)(nota1 + nota2) / 2;
        printf("Media Final = %.2lf\n", media);

    if (media < 60.0) {
        printf("Situacao do aluno %s: REPROVADO!\n", aluno);
        }
    else {
        printf("Situacao do aluno %s: APROVADO!\n", aluno);
        }

        printf("Deseja repetir? (s/n) ");
        limpar_entrada();
        scanf("%c", &resp);

    } while (resp == 's');

    return 0;
}
