
/*
Quick Quiz: Try these operations on another variable by creating pointers in a separate 
program. Demonstrate all the four operations. 
*/
#include<stdio.h>
int main()
{
    int arr[3][2];
    printf("Enter element in array : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 2; j++)
        {
            scanf("%d\n",&arr[i][j]);
        }
    }
    printf("Array : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}