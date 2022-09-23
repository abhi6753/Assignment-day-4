//8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    short i = 1;
    while(i<=10)
      printf("%d ",i*i++);
    getch();
    return 0;
}