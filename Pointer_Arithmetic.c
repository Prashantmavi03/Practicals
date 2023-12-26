#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int *pt = array; 

    printf("Original value: %d\n", *pt);

    // a. Increment a pointer
    printf("Increment a pointer:\t");
    pt++; 
    printf("%d\n", *pt);

    pt = array;

    // b. Decrement a Pointer
    printf("Decrement a pointer:\t");
    pt--; 
    printf("%d\n", *pt);

    pt = array;

    // c. Add an integer to a pointer
    printf("Add an integer to a pointer:\t");
    pt = pt + 2; 
    printf("%d\n", *pt);

    pt = array;

    // d. Subtract an integer from a pointer
    printf("Subtract an integer from a pointer:\t");
    pt = pt - 2; 
    printf("%d\n", *pt);

    pt = array;
    
    // e. Subtract two pointers of the same type
    printf("Subtract two pointers of the same type:\n");
    int *ptr2 = array + 3; 
    printf("Pointer 1: %p\n", (void *)pt);
    printf("Pointer 2: %p\n", (void *)ptr2);
    printf("Difference between pointers: %ld\n", ptr2 - pt);

    return 0;
}
