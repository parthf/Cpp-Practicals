//Write a program to create a person structure having age and weight using concept of pointers with structure.

#include <stdio.h>

struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPointer, person1;
    personPointer=&person1;

    printf("Enter person details :\n");

    printf("Enter age: ");
    scanf("%d",&personPointer->age);

    printf("Enter weight: ");
    scanf("%f",&personPointer->weight);

    printf("\nDisplaying:\n");
    printf("Age: %d\n",personPointer->age);
    printf("weight: %f",personPointer->weight);

    return 0;
}
