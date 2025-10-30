#include <stdio.h>

int main(void) {
    //variavel for
    int i;
    int nota;
    int boletim;

    //variavel if
    int media;

    for (i = 1; i <= 5; i++) {
        printf("digite sua %d nota: ", i);
        scanf("%d", &nota);
        boletim += nota;

        printf("notas = %d\n", boletim);
    }

    media = boletim / 5;
    printf("media = %d\n", media);
    if (media >= 6) {
        printf("aprovado!");
    } else {
        printf("reprovado!");
    }
}