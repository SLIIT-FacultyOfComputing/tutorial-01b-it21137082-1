/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  float m1 , m2 , avg=0 ;//declaired variables

//taking inputs from the keyboard
  printf("Enter subject 01 mark :");
  scanf("%f",&m1);

  printf("Enter subject 02 mark :");
  scanf("%f",&m2);
 

  avg = ( m1 + m2 )  /  2 ;//calculation

  printf("Average of the numbers %.2f and %.2f is :%.2f",m1 ,m2 ,avg);//final output

  
  return 0;
}

