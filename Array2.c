#include<stdio.h>
int main()
{
    int A[5];
    int i;
    printf("Enter five element in Array:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",A[i]);
    }
    printf("\nDisplay array element:");
    for(i=0;i<=4;i++)
    {
        printf("%d",A[i]);
    }
    printf("\nDisplay array element in reverse order:");
    for(i=4;i>=0;i--)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
