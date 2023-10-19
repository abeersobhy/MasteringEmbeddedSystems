#include <stdio.h>
typedef struct 
{
    float feet;
    float inch;
}SDistance;


int main()
{        
    SDistance distance1, distance2, sum;
    printf("Enter Information for 1st disatnce: \n");
    printf("Enter Feet: ");
    fflush(stdin);
    scanf("%f",&distance1.feet);
    printf("Enter Inch: ");
    fflush(stdin);
    scanf("%f",&distance1.inch);

    printf("Enter Information for 2nd disatnce: \n");
    printf("Enter Feet: ");
    fflush(stdin);
    scanf("%f",&distance2.feet);
    printf("Enter Inch: ");
    fflush(stdin);
    scanf("%f",&distance2.inch);

    sum.feet = distance1.feet + distance2.feet;
    sum.inch = distance1.inch + distance2.inch;
    /*If inchs is largger than 12 convert is to feets*/
    if(sum.inch > 12)
    {
        sum.inch -= 12;
        sum.feet++; 
    }
    printf("Sum of distances= %.2f\'-%.2f\"", sum.feet, sum.inch);
    return 0;
}