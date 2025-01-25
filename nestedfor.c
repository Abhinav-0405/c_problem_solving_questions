#include<stdio.h>
int main()
{
    int i;
    int j;
    for(i=1;i<=5;i++)//outer loop
    {
        for(j=1;j<=5;j++)//inner loop
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}