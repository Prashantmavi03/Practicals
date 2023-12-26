#include <stdio.h>

int sumDiagonal(int matrix[][3], int size);

int main() {
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[3][3];

    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int diagonalSum = sumDiagonal(matrix, size);
    printf("Sum of diagonal elements: %d\n", diagonalSum);

    return 0;
}

int sumDiagonal(int matrix[][3], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}
