#include<stdio.h>
int main()
{
    int a=10;
    int*p;
    p=&a;
    printf("\n Value of a=%d",a);
    printf("\n Address of a=%u",&a);
    printf("\n Value at pointer=%d",*p);
    return 0;
}