#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    printf("Enter String:");
    scanf("%s",&s1);//puts
    printf("string 1=%s",s1);//gets
    strrev(s2,s1);
   
    return 0;
}