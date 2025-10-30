#include <stdio.h>

int main(void) {
    int positivo;
    int negativo;
    int zero = 0;

    int number[10];
    int length = sizeof(number)/sizeof(number[0]);

    for (int i = 0; i <length; i++) {
        printf("Digite um numero %d: ",i);
        scanf("%d",&number[i]);
    }
    for (int i = 0; i <length; i++) {
        if (number[i] > 0) {
            positivo++;
        } else if (number[i] < 0) {
            negativo++;
        }else {
            zero++;
        }
    }
    printf("%d positivos de series\n", positivo);
    printf("%d negativos de series\n", negativo);
    printf("%d zero de series\n", zero);
}