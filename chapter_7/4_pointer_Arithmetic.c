#include<stdio.h>

int main()
{
    // pointer arithmetic using integer pointer
    int a = 5;
    int* ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The value of ptr %u\n",ptr);

    // pointer arithmetic using character pointer
    char b = 'a';
    char* ptr1 = &b;
    printf("The address of a is %u\n",&b);
    printf("The address of a is %u\n",ptr1);
    ptr1++;
    printf("The value of ptr %u\n",ptr1);
    return 0;
}