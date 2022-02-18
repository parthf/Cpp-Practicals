//Write a program to create an employee structure using function and structure.

#include<stdio.h>

struct employee
{
    char name[20];
    int salary;
};

struct employee get_data(struct employee e1);

void print_data(struct employee e2);

void main()
{
    struct employee e1,e2;
    e2=get_data(e1);
    print_data(e2);
}

struct employee get_data(struct employee e1)
{
    printf("Enter data for employee:");
    scanf("%s", e1.name);
    fflush(stdin);
    scanf("%d", &e1.salary);
    return e1;
}

void print_data(struct employee e2)
{
    printf("Employee %s is having salary %d",e2.name,e2.salary);
}
