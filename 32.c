#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    char str1[20], str2[20];

    sprintf(str1, "%d", *((const int *)a));
    sprintf(str2, "%d", *((const int *)b));

    char order1[40], order2[40];
    sprintf(order1, "%s%s", str1, str2);
    sprintf(order2, "%s%s", str2, str1);

    return strcmp(order2, order1);
}

void printLargestInteger(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    printf("The largest integer: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {944, 9, 0, 45};
    int size = sizeof(A) / sizeof(A[0]);

    printLargestInteger(A, size);

    return 0;
}
