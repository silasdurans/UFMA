#include <stdio.h>

int lado1;
int lado2;
int base;


int main(void) {
    printf("Adicione o valor do lado 1, lado2 e base, respectivamente:\n");

    printf("valor do lado 1:");
    scanf("%d",&lado1);

    printf("valor do lado 2:");
    scanf("%d",&lado2);

    printf("valor da base:");
    scanf("%d",&base);

    if (lado1 == lado2 && lado2 == base) {
        printf("seu triangulo é equilatero");
    } else if (lado1 == lado2 || lado2 == base || lado1 == base){
        printf("seu triangulo é isoceles");
    } else {
        printf("seu triangulo é escaleno");
    }

}