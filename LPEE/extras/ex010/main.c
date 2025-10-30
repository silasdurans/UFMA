#include <stdio.h>

int main(void) {
    int numeros[5];
    int length = sizeof(numeros) / sizeof(numeros[0]);

    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < length; i++) {
        printf("%d ", numeros[i]);
    }

}