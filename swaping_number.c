#include <stdio.h>

int main() {
    int a = 98, b = 67;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    int z = a;
    a = b;
    b = z;

    printf("After swapping with a third variable: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping without a third variable: a = %d, b = %d\n", a, b);

    return 0;
}
