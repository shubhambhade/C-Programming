#include <stdio.h>
//Write a program to print first ‘n’ natural numbers using for loop 
int main(){
    int n ;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}