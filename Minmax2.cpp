#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int size, m, n;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid input. Please enter a positive size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0 || n > size) {
        printf("Invalid input. n should be between 1 and %d.\n", size);
        return 1;
    }

    if (m <= 0 || m > size) {
        printf("Invalid input. m should be between 1 and %d.\n", size);
        return 1;
    }

    

    qsort(arr, size, sizeof(int), compare);

    int mthMax = arr[size - m];
    int nthMin = arr[n - 1];


    int sum = mthMax + nthMin;
    int diff = mthMax - nthMin;

    printf("mth maximum: %d\n", mthMax);
    printf("nth minimum: %d\n", nthMin);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);

    return 0;
}
