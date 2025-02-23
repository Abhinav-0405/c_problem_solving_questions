//Array left shift
#include<stdio.h>
int main()
{
    int a[20];int ms;int temp;int i;int d;int j;
    printf("\n Enter the size of array:");
    scanf("%d",&ms);
    printf("\n Enter array element:");
    for(i=0;i<=ms-1;i++)
    {
        scanf("%d",&a[i]);
    }    
    printf("How many times want to rotate:");
    scanf("%d",&d);
    for(j=1;j<=d;j++)
    {
         temp=a[0];
         for(i=0;i<=ms-1;i++)
         {
           a[i]=a[i+1];
         }
        a[ms-1]=temp;
       }
    printf("New array after rotation:");   
    for(i=0;i<=ms-1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}