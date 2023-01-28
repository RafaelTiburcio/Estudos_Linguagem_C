#include <stdio.h>
#include <string.h>

int main() {

    int glicose;

    while (glicose!= 0) {
        printf("Informe sua glicose sanguinea:");
        scanf("%d", &glicose);

    if (glicose <= 100) {
        printf("Sua glicose está normal.\n");
    }
    else if (glicose <= 140) {
        printf("Sua glicose sanguinea está acima da media.\n");
    }
    else {
        printf("ATENCAO! Quadro de diabetes!\n");
    }
    }

    return 0;
}
