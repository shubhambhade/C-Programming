/*
 Write a program to create an array of 10 integers and store multiplication table of 
  5 in it.
 */

#include <stdio.h>

int main(){
    int n;
    printf("Enter table number : ");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n* (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d \n", n , i+1, arr[i]);
    }
    
    return 0;
}