#include<stdio.h>
int main()
{
    int a[5];
    int i;
    int sum=0;
    printf("Enter array element:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}