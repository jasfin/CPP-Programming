#include<stdio.h>

void main()
{
 int a = 6;
 int *ptr = &a;
 *ptr = 7; 
 printf("%i",ptr);

}
