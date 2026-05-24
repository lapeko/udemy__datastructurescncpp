#include <stdio.h>

void toh(int n, int a, int b, int c) {
    static int iter = 1;
    if (n <= 0) return;

    toh(n - 1, a, c, b);
    printf("%d: %d, %d\n", iter++, a, b);
    toh(n - 1, c, b, a);
}

int main() {
    toh(5, 1, 2, 3);
    return 0;
};
