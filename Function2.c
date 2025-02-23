#include<stdio.h>
void swap()
{
    int a,b,c;
    a=10;b=20;
    printf("\nbefore swapping");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swapping");
    printf("\na=%d",a);
    printf("\nb=%d",b);
}
int main()
{
    swap();
    return 0;
}