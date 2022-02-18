//Write a program to read data from the keyboard, write it to a file called INPUT, again read the same data from the INPUT file, and display it.

#include<stdio.h>

void main()
{
    FILE *INPUT;
    char c;
    printf("Enter Data:");
    INPUT=fopen("file.txt","w");
    while((c=getchar())!=EOF)
        putc(c,INPUT);
    fclose(INPUT);
    printf("\nData which you've entered:");
    INPUT=fopen("file.txt","r");
    while((c=getc(INPUT))!=EOF)
        printf("%c",c);
    fclose(INPUT);
}
