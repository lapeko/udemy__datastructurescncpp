#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 1, b = 2;
    printf("Sum of %d and %d is %d\n", a, b, sum(a, b));
    return 0;
}