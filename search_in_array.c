#include <stdio.h>

int main() {
    int array[] = {4, 2, 7, 1, 9, 5, 3, 8, 6}; 
    int key; 

    printf("Enter the number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 9; i++) {
        if (array[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            break;
        }
        else{
            printf("Element not found");
            break;
        }
    }

    return 0;
}
