#include <stdio.h>


float calculate_S_I(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float amount, interest, time;

    
    printf("Enter the principal amount: ");
    scanf("%f", &amount);

    printf("Enter the interest rate (as a decimal): ");
    scanf("%f", &interest);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    
    float simpleInterest = calculate_S_I(amount, interest, time);

   
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
