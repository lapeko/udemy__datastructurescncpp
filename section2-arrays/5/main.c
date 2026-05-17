#include <stdio.h>

struct Rectangle {
    int width;
    int height;
};

int main() {
    struct Rectangle r = {.width = 4, .height = 5};

    int area = r.width * r.height;

    printf("area is: %d\n", area);
    printf("size of struct r is: %ld\n", sizeof(r));

    struct Rectangle rs[2] = {{4, 5}};

    printf("rs[1] width: %d, length: %d\n", rs[1].width, rs[1].height);

    return 0;
}
