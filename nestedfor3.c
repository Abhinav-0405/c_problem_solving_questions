#include<stdio.h>
int main()
{
    int i;
    int j;
    for(i=1;i<=5;i++)//outer loop
    {
        for(j=1;j<=i;j++)//inner loop
        {
            printf("%d",j);//also with i
        }
        printf("\n");
    }
    return 0;
}