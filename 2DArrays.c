//
#include<stdio.h>
int main()
{
    int i;int j;
    int A[3][3];
    printf("Enter Array Element:");
    for(i=0;i<=2;i++)//row
    {
        for(j=0;j<=2;j++)//column
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<=2;i++)//row
    {
        for(j=0;j<=2;j++)//column
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}