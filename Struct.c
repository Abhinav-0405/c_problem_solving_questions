#include<stdio.h>
struct xyz
{
    int a;  //sub variable
    float b;
    char c;
};//s1
int main()
{
    struct xyz s1;
    printf("\n Enter a:");
    scanf("%d",&s1.a);
    printf("\n Enter b:");
    scanf("%f",&s1.b);
    s1.c='x';
    printf("\na=%d",s1.a);
    printf("\nb=%f",s1.b);
    printf("\nc=%c",s1.c);
    
    return 0;
}