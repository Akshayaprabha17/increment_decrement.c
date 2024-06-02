#include<stdio.h>
#include<conio.h>
void main()
{
   int i=10,j;
   printf("post increment\n");
   j=i++;//post increment
   printf("i=%d",i);
   printf("\nj=%d",j); 
   printf("\npre increment");
   j=++i;//pre increment
   printf("\ni=%d",i);
   printf("\nj=%d",j);
   printf("\npost decrement");
   j=i--;//post decrement
   printf("\ni=%d",i);
   printf("\nj=%d",j);
   printf("\npre decrement");
   j=--i;
   printf("\ni=%d",i);
   printf("\nj=%d",j);
   
}