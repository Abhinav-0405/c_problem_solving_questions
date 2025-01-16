#include <stdio.h>

int main() {
    
    float principal, rate, time, simpleInterest;

    
    printf("Enter principal amount");
    scanf("%f", &principal);

    printf("Enter rate");
    scanf("%f", &rate);

    printf("Enter time");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;

    
    printf("Simple Interest: %f", simpleInterest);

    return 0;
}
