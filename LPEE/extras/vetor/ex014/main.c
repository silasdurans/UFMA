#include <stdio.h>

int main(void) {
    int vet1[5];
    int vet2[5];

    int length1 = sizeof(vet1)/sizeof(vet1[0]);
    int length2 = sizeof(vet2)/sizeof(vet2[0]);

    for (int i = 0; i < length1; i++) {
        printf("digite seu %d numero para vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
    }
    for (int i = 0; i < length2; i++) {
        printf("digite seu %d numero para vetor2: ", i+1);
        scanf("%d", &vet2[i]);
    }

    int vet3[5];
    int length3 = sizeof(vet3)/sizeof(vet3[0]);
    //vetor3 tem que mostrar vet1+vet2
    for (int i = 0; i < length3; i++) {
        vet3[i] = vet1[i] + vet2[i];

        printf("%d + %d eh %d \n", vet1[i], vet2[i], vet3[i]);
    }

}