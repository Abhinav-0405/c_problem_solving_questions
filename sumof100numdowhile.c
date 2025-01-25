#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    i=1;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=100);
    printf("sum=%d",sum);
    return 0;
}