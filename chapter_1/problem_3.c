/*
3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). 
*/
#include<stdio.h>
int main()
{
    float c = 37.0 , f;
    f = (9/5)*c + 32;
    printf("The value of Fahrenheit is : %f,",f);
    return 0;
}