#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n % 3 == 0) {
        printf("%d is divisible by 3\n", n);
        }

    if (n % 7 == 0) {
        printf("%d is also divisible by 7\n", n);
        } 
   
    if (n % 5 == 0) {
        printf("%d is divisible by 5\n", n);
        } 
            
    if (n % 8 == 0) {
        printf("%d is divisible by 8\n", n);
        } 

    if (n % 6 == 0) {
        printf("%d is divisible by 6\n", n);
        } 
            
    return 0;
}
