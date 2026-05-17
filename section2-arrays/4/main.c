#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4};
    
    printf("Array's size %ld. Item's size: %ld\n", sizeof(a), sizeof(a[0]));

    int b[0];

    printf("Array's size %ld. Item's size: %ld\n", sizeof(b), sizeof(b[0]));

    int size;
    printf("Enter a size of a new array\n");
    scanf("%d", &size);
    int c[size];
    c[0] = 2;

    for (int i = 0; i < size; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }
}
