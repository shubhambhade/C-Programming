#include<stdio.h>
int main()
{
    int marks[5] ;

    printf("Enter marks : \n");
    for(int i = 0 ; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    } 
    printf("Array : ");
    for(int i = 0 ; i < 5; i++)
    {
        printf("%d  ",marks[i]);
    }  
    return 0;
}