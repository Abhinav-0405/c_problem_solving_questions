#include<stdio.h>
int main()
{
    int ch;
    printf("press 1 for case1");
    printf("press 2 for case2");
    printf("press 3 for case3");
    printf("press 4 for case4");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)//5
    {
        case 1:printf("case1");break;
        case 2:printf("case2");break;
        case 3:printf("case3");break;
        case 4:printf("case4");break;
        default:printf("invalid value");
    }
    return 0;
}