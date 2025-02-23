//Student List
#include<stdio.h>
struct Student
{
    char name[20];
    int rn;
};
int main()
{
    struct Student s1[5];int i;
    for(i=0;i<=4;i++)
    {
        printf("\n Enter the Name:");
        scanf("%s",&s1[i].name);
    }
     for(i=0;i<=4;i++)
    {
        printf("\n Enter the Roll No.:");
        scanf("%d",&s1[i].rn);
    }
     for(i=0;i<=4;i++)
    {
        printf("\n name=%s and roll no.=%d",s1[i].name,s1[i].rn);
    }
    return 0;
}