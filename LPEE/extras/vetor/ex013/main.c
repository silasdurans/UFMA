#include <stdio.h>

int main(void) {
    int numb[6];
    int verNumb[6];

    int length = sizeof(numb) / sizeof(numb[0]);

    for (int i = 0; i < length; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &numb[i]);
    }
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numb[i]);
    }

}