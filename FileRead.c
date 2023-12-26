#include <stdio.h>

int main() {
   
    FILE *file = fopen("example.txt", "r");   
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}
