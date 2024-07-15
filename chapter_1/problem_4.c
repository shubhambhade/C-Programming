/*
4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. 
*/

#include<stdio.h>
int main()
{
    float p , r , t;
    printf("Enter principle amount : ");
    scanf("%f",&p);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    printf("Enter  duration of time : ");
    scanf("%f",&t);
    float simple_interest = ( p * r * t)/100;
    printf("The simple interest is : %f", simple_interest);
    return 0;
}