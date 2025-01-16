#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two values to swap");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Values after swapping: a = %d, b = %d", a, b);

    return 0;
}
