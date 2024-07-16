/*
1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the 
array.
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int mark[size];
    printf("Enter element in array : \n ");
    for(int i = 0 ; i < size; i++ )
    {
        scanf("%d",&mark[i]);
    }
    printf("Array : ");
    for(int i = 0 ; i < size; i++ )
    {
        printf("%d \n",mark[i]);
    }
    int *ptr = mark;
    printf("The value at address %u is %d ",ptr+2 ,*(ptr+ 2));
    return 0;
}