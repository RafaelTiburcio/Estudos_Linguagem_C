#include <stdio.h>
#include <math.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar ()) != '\n' && c != EOF) {}
}

int main() {

    char p1[50];
    char p2[50];
    double media;
    int idade1, idade2;

    media = 0;

    printf("DADOS DA PRIMEIRA PESSOA:\n");
    printf("NOME: ");
    gets(p1);
    printf("IDADE: ");
    scanf("%d", &idade1);
    printf("DADOS DA SEGUNDA PESSOA:\n");
    printf("NOME: ");
    limpar_entrada();
    gets(p2);
    printf("IDADE: ");
    scanf("%d", &idade2);
    media = (double)(idade1 + idade2) / 2;



    printf("A idade media de %s e %s eh de %.1lf anos", p1, p2, media);







    return 0;
}
