#include <stdio.h>

int main() {
    int number, reversed = 0;

    
    printf("Enter a 5-digit number: ");
    scanf("%5d", &number);

    
    reversed = (number % 10) * 10000 +
               ((number / 10) % 10) * 1000 +
               ((number / 100) % 10) * 100 +
               ((number / 1000) % 10) * 10 +
               ((number / 10000) % 10);

    
    printf("Reversed number: %d\n", reversed);

    return 0;
}
