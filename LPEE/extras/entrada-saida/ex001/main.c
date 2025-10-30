#include <stdio.h>

int main(void) {
    float num1, num2;
    int soma;
    int prod;
    int dif;
    float quo;

    printf("escreva o seu primeiro numero: ");
    scanf("%d",&num1);

    printf("escreva o seu segundo numero:");
    scanf("%d",&num2);

    printf("seus numeros sao %d e %d \n", num1, num2);

    // fazendo a soma
    soma = num1 + num2;
    printf("a soma e igual a %d \n", soma);

    // o produto
    prod = num1 * num2;
    printf("seu produto e: %d \n", prod);

    // a diferença
    dif = num1 - num2;
    printf("sua diferenca e %d \n", dif);

    // o quociente
    quo = (num1 / num2);
    printf("seu quociente e %.2f", quo);
}