#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int width;
    int height;
};

void main() {
    struct Rectangle *r1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    struct Rectangle *r2 = r1;

    r1->width = 10;
    r1->height = 20;

    printf("r2->width: %d\n", r2->width);
    printf("r2->height: %d\n", r2->height);

    free(r1);
}
