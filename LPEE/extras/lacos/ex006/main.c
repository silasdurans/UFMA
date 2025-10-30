#include <stdio.h>

int main(void) {
    int i;
    int mult;

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        mult = num * i;
        printf("%d * %d = %d\n", i, num, mult);
    }

   /*
    int i;
    int num;
    int mult;

    for (i = 1; i <= 10; i++) {
        for (num = 1; num <= 10; num++) {
            mult = i * num;
            printf("%d * %d = %d\n", i, num, mult);
        }
    }
    */
}