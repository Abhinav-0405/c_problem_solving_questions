#include<stdio.h>
int main()
{
    int A[5];
    int i;
    printf("Enter five element in Array:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&A[i]);//input
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",A[i]);
    }
    return 0;
}
