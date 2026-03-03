#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

//вар1 задание 1 номер 3

void printBinary(unsigned short x) {
    for (int i = 15; i >= 0; i--) {
        unsigned short mask = 1 << i;
        printf("%d", (x & mask) ? 1 : 0);
    }
}

int main() {
    unsigned short x;

    printf("Vvedite bezznakovoe kratkoe celoe chislo: ");
    scanf("%hu", &x);

    printf("Binary predstavlenie chisla:\n");
    printBinary(x);

    return 0;
}