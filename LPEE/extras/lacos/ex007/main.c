#include <stdio.h>

int main(void) {
    // variaveis
    int par;
    int impar;
    int number;

    //quantos são impares e pares
    // dividir por 2, se tiver resto é ímpar
    for (int i = 1; i <= 10; i++) {
        printf("digite o %d numero: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            par++;
        }else {
            impar++;
        }
    }

    printf("par: %d\n", par);
    printf("impar: %d\n", impar);

}