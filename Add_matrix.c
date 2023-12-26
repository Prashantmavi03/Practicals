#include <stdio.h>

int main() {
    
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6},{3,4,6}};
    int matrix2[3][3] = {{7, 8, 9}, {10, 11, 12}, {7,8,9}};
    int rows = 3, cols = 3;


 
    int result[3][3];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

  printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

