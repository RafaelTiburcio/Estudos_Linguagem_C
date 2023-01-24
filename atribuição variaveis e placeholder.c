#include <stdio.h>
#include <string.h>

int main() {

    int x, y;
    double z;
    char nome_produto[50];
    char codigo_produto;
    char nome_comprador[50];

     x = 10;
     y = 20;
     z = 350.00;
     strcpy(nome_produto, "Gabinete");
     codigo_produto = 'G';
     strcpy(nome_comprador, "Rafael");

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%.2lf\n", z);
    printf("%s\n", nome_produto);
    printf("%c\n", codigo_produto);

    printf("O %s, codigo %c, foi comprado pelo cliente %s, no valor de R$ %.2lf", nome_produto, codigo_produto, nome_comprador, z);




    return 0;
}
