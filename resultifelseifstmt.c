#include<stdio.h>
int main()
{
    int p;
    printf("Enter The Percentage:");
    scanf("%d",&p);
    if(p<=100&&p>=65)
    {
        printf("I Division");
    }
    else if(p<65&&p>=50)
    {
        printf("II Division");
    }
    else if(p<50&&p>=35)
    {
        printf("III Division");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}