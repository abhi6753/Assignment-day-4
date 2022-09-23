//4. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
   int i=1,n=1;
   while(i<=10)
   {
    printf("%d ",n);
    n = n+2;
    i++;
   }
   getch();
   return 0;
}