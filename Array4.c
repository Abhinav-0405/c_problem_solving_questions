//Addition of two single dimension array
#include<stdio.h>
int main()
{
    int A[3];
    int B[3];
    int C[3];
    int i;

    printf("Enter three elements in array A:");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter three elements in array B:");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<=2;i++)
    {
        C[i]=A[i]+B[i];
    }
    printf("Display array C:\n");
    for(i=0;i<=2;i++)
    {
        printf("%d",C[i]);
    }
    return 0;
}