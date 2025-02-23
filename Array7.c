//Array Left Shifting
//remove an element from an array
#include<stdio.h>
int main()
{
    int a[20];
    int ms;int n;int pos;int i;
    printf("\n enter the size of array:");
    scanf("%d",&ms);
    printf("\n enter the array element:");
    for(i=0;i<=ms-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" enter the new element:");
    scanf("%d",&n);
    printf("enter the location :");
    scanf("%d",&pos);
    pos--;
    for(i=ms-1;i>=pos;i--);
    {
        a[i+1]=a[i];
    }
    a[pos]=n;
    ms++;
    printf("\n new array:");
    for ( i =0; i <=ms-1; i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}