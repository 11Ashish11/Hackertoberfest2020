// TO ADD TWO NUMBERS IF WE HAVE TO INPUT THEM
#include<stdio.h>
main()
{
int a,b,c;
printf("enter value of a:");
scanf("%d",&a);   //scanf is an input function which comes stdio header file
                  //user is taking input from keyboard of integer type and then that value of input
                  //stores in RAM at address of a
                  //& is an address operator
printf("enter value of b:");
scanf("%d",&b);
c=a+b;
printf("the sum of a and b is:%d",c);
}
