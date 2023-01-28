#include <stdio.h>

int main() {

    double hora;

    printf("Informe as horas? ");
    scanf("%lf", &hora);

    if (hora < 12) {
        printf("Bom dia!\n");
    }
    else if (hora < 18){
        printf("Boa tarde!\n");
    }
    else {
        printf("Boa noite!\n");
    }
    return 0;
}
