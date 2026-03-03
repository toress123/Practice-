#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//вар1 задание 1 номер 2

int find_max(int arr[], int n) {
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;

    printf("Vvedite kolichestvo chisel: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("kolichestvo dolzhno bit bolshe 0\n");
        return 1;
    }

    int* numbers = (int*)malloc(n * sizeof(int));

    //if (numbers == NULL) {
    //    printf("Ошибка выделения памяти\n");
    //    return 1;
    //}

    printf("Vvedite %d celih chisel:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int maximum = find_max(numbers, n);
    printf("Maximum = %d\n", maximum);

    free(numbers);

    return 0;
}