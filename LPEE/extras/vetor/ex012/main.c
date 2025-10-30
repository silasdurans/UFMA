#include <stdio.h>

int main(void) {

    int par[8];
    int i;

    int number[8];
    int length = sizeof(number) / sizeof(number[0]);

    for (i = 0; i < length; i++) {
        printf("Enter a number %d:", i);
        scanf("%d", &number[i]);
    }

    for (i = 0; i < length; i++) {
        if (number[i] % 2 == 0) {
            printf("%d eh par \n", number[i]);
        }
    }
}