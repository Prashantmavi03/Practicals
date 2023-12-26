#include <stdio.h>

int main() {
    
    int array[] = {1,2,3,4,5,6,734,809,9,124,11,12,13};
   
    int sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += array[i];
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
