#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");

    fprintf(file, "This data is appended to the file.\n");
    fclose(file);

    return 0;
}
