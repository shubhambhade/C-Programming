#include<stdio.h>

int main()
{
    int mark[4];
    printf("Enter marks : ");
    for(int i = 0 ; i < 4; i++ )
    {
        scanf("%d",&mark[i]);
    }
    printf("Array : ");
    for(int i = 0 ; i < 4; i++ )
    {
        printf("%d \n",&mark[i]);
    }
    return 0;
}