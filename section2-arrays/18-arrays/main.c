#include <stdio.h>
#include <stdlib.h>

int* make_array(int size) {
    int *a = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        i[a] = i + 1;
    }
    return a;
}

int main() {
    int size = 5;
    int *arr = make_array(size);

    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}