#include <stdio.h>

int main(void) {
    int num;

    //ler um numero inteiro e descobrir se é positivo, negativo ou zero;
    printf("escreva seu numero: ", num);
    scanf("%d", &num);
    if (num > 0) {
        printf("num positivo", num);
    } else if (num < 0) {
        printf("num negativo", num);
    } else {
        printf("num e zero", num);
    }
}