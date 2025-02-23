//string copy function
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s1[]="Ram";
    char s2[20];
    strcpy(s2,s1);
    printf("string2=%s",s2);
    return 0;
}