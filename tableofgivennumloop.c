#include<stdio.h>
int main()
{
    int i,r,n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        r=n*i;
        printf("%d\n",r);
        i++;
    }
    printf("sum=%d",r);
     return 0;
}