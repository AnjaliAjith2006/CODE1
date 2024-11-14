
#include <stdio.h>

struct student
{
    int roll_no;
    char name[100];
    int age;
};
struct student s[100];
int main()
{
    for (int i =0;i<2;i++)
    {
        printf("enter the details of employee %d",i+1);
        scanf("%d",&s[i].roll_no);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].age);
    }
    for(int i =0;i<2;i++)
    {
        printf("details of %d employee is",i+1);
        printf("%d\t",s[i].roll_no);
        printf("%s\t",s[i].name);
        printf("%d\t",s[i].age);
        printf("\n");
    }
    return 0;
}