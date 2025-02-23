#include<stdio.h>
void swap(int,int);
void swap(int a,int b)//formal parameter or argument
{
    int c;
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
    int x,y;
    printf("enter x and y:");
    scanf("%d%d",&x,&y);
    swap(x,y); //actual parameter
    return 0;
}