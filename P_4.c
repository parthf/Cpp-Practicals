//Write a program to swap 2 values of a variables by using pointer.

#include <stdio.h>
#include<string.h>

void swap(int * ,int *);

int main()
{
    int a=5, b=7;
    printf("values of a = %d and b=%d",a,b);
    swap(&a,&b);
    return 0;
}

void swap(int *a,int *b)
{
    int c=0;
    c=*a;
    *a=*b;
    *b=c;
    printf("\n after swapping values of a = %d and b=%d \n",*a,*b);
}
