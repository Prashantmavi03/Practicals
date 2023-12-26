#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    fprintf(file, "Hello, this is a file write operation.\n");

    return 0;
}
