#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SIZE = 5;
    int *arr = (int *)calloc(SIZE, sizeof(int));

    0[arr] = 1;
    arr[1] = 2;
    *(arr + 2) = 3;

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *arr++);
    }
    free(arr - SIZE);
    printf("\n");

    return 0;
}
