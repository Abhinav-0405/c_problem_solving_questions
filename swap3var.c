#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter two values to swap");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;
    
    
    printf("Values after swapping: a = %d, b = %d", a, b);

    return 0;
}
