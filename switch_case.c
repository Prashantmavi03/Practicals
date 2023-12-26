#include <stdio.h>

int main() {
    int n, r;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    r = n % 4;

    
    switch (r) {
        case 0:
            printf("%d is divisible by 4\n", n);
            break;
        case 1:
            printf("%d leaves a r of 1 when divided by 4\n", n);
            break;
        case 2:
            printf("%d leaves a r of 2 when divided by 4\n", n);
            break;
        case 3:
            printf("%d leaves a r of 3 when divided by 4\n", n);
            break;
       
        default:
            printf("Invalid case\n");
    }

    return 0;
}
