//sum of 2D arrays
#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i;int j;
    printf("Enter element in Array a:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf ("Enter element in Array b:");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
             c[i][j]=a[i][j]+b[i][j];
        }
    }
    
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}