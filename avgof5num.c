#include <stdio.h>

int main() {
    
    float a,b,c,d,e,f;

    
    printf("Enter five numbers:");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    
    f= (a+b+c+d+e) / 5;

    
    printf("%f",f);

    return 0;
}
