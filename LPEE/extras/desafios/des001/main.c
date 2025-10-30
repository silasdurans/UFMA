#include <stdio.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    gets(str);

    int soma = 0;
    int numero_atual = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            // Constrói o número atual
            numero_atual = numero_atual * 10 + (str[i] - '0');
        } else {
            // Quando não for número, soma o acumulado
            soma += numero_atual;
            numero_atual = 0;
        }
    }

    // Soma o último número, se terminar em dígito
    soma += numero_atual;

    printf("Soma dos números encontrados: %d\n", soma);
    return 0;
}
