#include <stdio.h>

int main(void) {
    int acima7;

    int notas[10];
    int length = sizeof(notas)/sizeof(notas[0]);

    for (int i = 0; i < length; i++) {
        notas[i] = i + 1;
    }
    for (int i = 0; i < length; i++) {
        if (notas[i] >= 7) {
            acima7++;
        }
    }
    printf("%d tiraram notas acima de 7 \n", acima7);
}