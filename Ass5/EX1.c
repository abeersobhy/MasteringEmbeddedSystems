#include <stdio.h>

typedef struct 
{
    unsigned char name[25];
    unsigned int roll_number;
    float marks;
}S_students;

int main()
{
    S_students student;
    printf("Enter information of a student: \n");
    printf("Enter the Name : ");
    fflush(stdin);
    scanf("%s", student.name);
    
    printf("Enter the roll numbe: ");
    fflush(stdin);
    scanf("%d",&student.roll_number);

    printf("Enter the marks: ");
    fflush(stdin);
    scanf("%f",&student.marks);

    printf("Displaying Information : \n");
    printf("Name : %s\n", student.name);
    printf("Roll : %d\n", student.roll_number);
    printf("Marks :%.2f", student.marks);

}