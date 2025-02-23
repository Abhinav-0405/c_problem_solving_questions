#include<stdio.h>
#include<string.h>
int main()
{
    char s[5][10];
    int i;
    printf("Enter 5 String:");
    for(i=0;i<=4;i++)
    {
        scanf("%s",&s[i]);//puts
    }
     for(i=0;i<=4;i++)
    {
        printf("\n Namaskar");
        printf("%s",s[i]);//gets
    }
    return 0;
}