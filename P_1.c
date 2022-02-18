//Write a program to create students structure using arrays and structure.

#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    int marks;
};

void main()
{
    char nm[50];
    int i;
    printf("Enter student details:\n");
    struct student s[2];
    for(i=0;i<2;i++)
    {
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d", &s[i].roll, &s[i].marks);
    }
    for(i=0;i<2;i++)
    {
        printf("The student %s with roll call %d is having %d marks.\n",s[i].name,s[i].roll,s[i].marks);
    }
}
