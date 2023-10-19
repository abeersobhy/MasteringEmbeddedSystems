#include <stdio.h>

typedef struct 
{
    unsigned char name[25];
    unsigned int roll_number;
    float marks;
}S_students;

int main()
{
    int iteratior = 0;
    S_students student[10];
    printf("Enter information of a students: \n");
    for(iteratior = 0; iteratior < 10; iteratior++)
    {
        printf("For roll numer %d\n", iteratior+1);
        printf("Enter name: ");
        scanf("%s", &student[iteratior].name);
        fflush(stdin);
        printf("Enter Marks: ");
        scanf("%f", &student[iteratior].marks);
        student[iteratior].roll_number = iteratior+1;
    }

    printf("Displaying Information : \n");
    for(iteratior = 0; iteratior < 10; iteratior++)
    {
        printf("For roll numer %d\n", iteratior+1);
        printf("Name : %s\n", student[iteratior].name);
        printf("Roll : %d\n", student[iteratior].roll_number);
        printf("Marks :%.2f\n", student[iteratior].marks);
    }
}