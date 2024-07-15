/*
1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user. 
*/

#include<stdio.h>
int main()
{
    float area_rectangle;
    float length;
    float breadth;

    printf("Enter the length of rectangle : ");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle : ");
    scanf("%f",&breadth);
    area_rectangle = length * breadth;
    printf("Area of rectangle : %f",area_rectangle);
    return 0;
}