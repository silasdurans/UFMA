#include <stdio.h>

int main(void) {
    int num1,num2,num3;

    printf("primeiro numero:", num1);
    scanf("%d",&num1);
    printf("segundo numero:", num2);
    scanf("%d",&num2);
    printf("terceiro numero:", num3);
    scanf("%d",&num3);

    //printar o maior e o menor
    if (num1 > num2 && num1 > num3) {
        printf("%d e o maior \n", num1);
        if (num2 < num3) {
            printf("%d e o menor", num2);
        } else {
            printf("%d e o menor", num3);
        }
    }
    if (num2> num1 && num2 > num3) {
        printf("%d e o maior", num2);
        if (num1 < num3) {
            printf("%d e o menor \n", num1);
        } else {
            printf("%d e o menor", num3);
        }
    }
    if (num3 > num2 && num3 > num1) {
        printf("%d e o maior \n", num3);
        if (num2 < num1) {
            printf("%d e o menor", num2);
        } else {
            printf("%d e o menor \n", num1);
        }
    }
}