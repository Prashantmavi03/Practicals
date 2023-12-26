#include <stdio.h>

float c_to_f(float c) {
    return (c * 9/5) + 32;
}

float f_to_c(float f) {
    return (f - 32) * 5/9;
}

int main() {
    
    float t;
    char c;

    
    printf("Enter temperature: ");
    scanf("%f", &t);

    printf("Enter your c (1 for c_to_f or 2 for f_to_c): ");
    scanf(" %c", &c);

    
    if (c == '1') {
        
        float r = c_to_f(t);
        printf("%f Celsius is %f Fahrenheit\n", t, r);
    } 
    else if (c == '2') {
        
        float r = f_to_c(t);
        printf("%f Fahrenheit is %f Celsius\n", t, r);
    } 
    else {
       
        printf("Invalid c. Please enter 1 or 2.\n");
    }

    return 0;
}
