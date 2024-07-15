#include <stdio.h>

int main(){
    /*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
    */
   char grade;
   float marks ;
   printf("Enter ypur marks : ");
   scanf("%f",&marks);
   if(marks<=100 && marks>=90){
    grade = 'A';
    printf("Grade : %c", grade);
   }
   else if(marks<=90 && marks>=80){
    grade = 'B';
    printf("Grade : %c", grade);
   }
   else if(marks<=80 && marks>70){
    grade = 'C';
    printf("Grade : %c", grade);
   }
   else if(marks<=70 && marks>=60){
    grade = 'D';
    printf("Grade : %c", grade);
   }
   else if(marks<=60 && marks>=50){
    grade = 'E';
    printf("Grade : %c", grade);
   }
   else{
    grade = 'F';
    printf("Fail");
   }
    return 0;
}   