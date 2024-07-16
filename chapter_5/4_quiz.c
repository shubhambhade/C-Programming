/*
Quick Quiz: Use the library function to calculate the area of a square with side a. 
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter side of square in cm :");
    scanf("%d",&a);
    printf("The area of this square is %f\n", pow(a, 2));
    return 0;
}

