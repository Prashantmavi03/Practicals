#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    int *ptr1, *ptr2, temp;
    ptr1 = &num1;
    ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
