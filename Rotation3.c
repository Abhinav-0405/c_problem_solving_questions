//Array right shift
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
         temp=a[ms-1];
         for(i=ms-1;i<=0;i--)
         {
           a[i+1]=a[i];
         }
           a[0]=temp;
    }
    printf("New array after rotation:");   
    for(i=0;i<=ms-1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}