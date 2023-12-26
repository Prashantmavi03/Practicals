#include <stdio.h>

void factorial(int fact) {
    fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        }
    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    int result = factorial(num);

    printf("Factorial of %d: %d\n", num, result);

    return 0;
}
