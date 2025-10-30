#include <stdio.h>

int main(void) {

    int maior;
    int menor;
    float soma, media;

    int number[10];
    int length= sizeof(number) / sizeof(number[0]);

    for (int i = 0; i < length; i++) {
        printf("digite seu %d numero: ", i);
        scanf("%d", &number[i]);

        if (i == 0) {
            maior = number[0];
            menor = number[0];
        } else {
            if (number[i] > maior) {
                maior = number[i];
            }else if (number[i] < menor) {
                menor = number[i];
            }
        }

        printf("%d \n", maior);
        printf("%d \n", menor);

        soma += number[i];
    }

    media = soma / length;

    printf("a maior eh %d \n", maior);
    printf("o menor eh %d \n", menor);
    printf("a media eh de %.2f \n", media);

}