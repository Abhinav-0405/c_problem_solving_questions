#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int n;
    i=1;
   
    do
    {
       printf("Values entered by the user:");
       scanf("%d",&n);
       sum=sum+n;
       i++;

    }
    while(i<=10);
    printf("sum=%d",sum);
    return 0;
}

