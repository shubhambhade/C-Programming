/*
 Write a program containing functions which counts the number of positive 
integers in an array. 
*/
#include<stdio.h>

int count(int a[], int n)
{
   int positive_number_count = 0;
    for( int i = 0; i < n ; i++)
    {
        if(a[i] > 0)
        {
            positive_number_count++;
        }
    }
    return positive_number_count;
}
int main()
{
    int a[] = {1, 2, 3, 4, -5, 6, 7, -8, 9, 10}; 

    printf("The no of positive integers is %d", count(a, 10));

    return 0;  
    
}
