#include <stdio.h>

int main() {
    
    int array[] = {1,2,3,4,5,6,734,809,9,124,11,12,13};
    int  max , min;
    float average;
    
    for (int i = 0; i < 13; i++) {
        average += array[i];
        
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    }

        average = average/13;
    
    printf("Average: %f\n", average);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}