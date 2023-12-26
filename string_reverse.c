#include <stdio.h>

int main() {
    
    char str[] = "Faculty of technology";
    int length = 21;

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed String: %s\n", str);
    return 0;
}
