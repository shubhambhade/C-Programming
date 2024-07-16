#include<stdio.h>

void sum()
{
    int num1 , num2 , sum;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);

    sum = num1 + num2;
    printf("The sum of two numbers : %d",sum);
}
int main()
{
    sum();
return 0;
}