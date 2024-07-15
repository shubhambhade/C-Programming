/*
2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height.
*/
#include <stdio.h>
void area_of_circle()
{
    float pi = 3.14;
    float radius;
    printf("Enter radius of circle : ");
    scanf("%f",&radius);
    float area_circle = pi * radius * radius;
    printf("Area of circle : %f",area_circle);
}
void volume_of_cylinder()
{
    float  radius;
    float height;
    float pi = 3.14;
    printf("\nEnter radius of cylinder : ");
    scanf("%f",&radius);
    printf("Enter heigth of cylinder : ");
    scanf("%f",&height);
    float volume_cylinder = pi * radius * radius;
    printf("\nArea of circle : %f",volume_cylinder);
}
int main()
{
    area_of_circle();
    volume_of_cylinder();
    return 0;
}

