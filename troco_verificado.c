#include <stdio.h>
#include <string.h>

int main() {

    double preco_produto, total_compra, valor_recebido, diferenca, troco;
    int quantidade_comprada;

    preco_produto = 0;
    total_compra = 0;
    valor_recebido = 0;
    diferenca = 0;
    troco = 0;


    while (quantidade_comprada != 0) {

    printf("Informe o preco do produto: ");
    scanf("%lf", &preco_produto);

    printf("Informe a quantidade comprada: ");
    scanf("%d", &quantidade_comprada);

    total_compra = preco_produto * quantidade_comprada;

    printf("Informe o valor recebido pelo cliente: ");
    scanf("%lf", &valor_recebido);

    if (valor_recebido < total_compra) {
        diferenca = total_compra - valor_recebido;
        printf("O total da compra foi R$ %.2lf\n", total_compra);
        printf("Faltam R$ %.2lf para dar prosseguimento ao seu pedido.", diferenca);
    }
    else {
        troco = valor_recebido - total_compra;
        printf("O valor recebido foi R$ %.2lf\n", valor_recebido);
        printf("O total da compra foi R$ %.2lf\n", total_compra);
        printf(" valor do troco: R$ %.2lf\n", troco);
    }
    }

    return 0;
}
