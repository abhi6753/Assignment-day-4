//5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10;
    while(i>0)
    {
       printf("%d ",i*2-1);
       i--;
    }
    getch();
    return 0;
}