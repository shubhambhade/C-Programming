#include<stdio.h>

int factorial();
    // Factorial(5) = 1 * 2 * * 3 *4 * 5;
    // Factorial(n) = 1 * 2 * * 3 *4 * 5 ..........n-1 * n;
    // Factorial(0) = 1;
    // Factorial(1) = 1;
int factorial(int n)
{
    if(n == 1 || n == 0 ) // base condition
    {
        return 1;
    }
    // Factorial(n) = Factorial(n-1) * n;
    return factorial(n-1) * n;
}
int main()
{
    int a;
    printf("Enter number and find factorial : ");
    scanf("%d",&a);
    printf("Factorial of %d is  %d ",a,factorial(a));
    return 0;
}