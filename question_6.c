//6. Write a program to print the first 10 even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    short i=1;
    while (i<=10)
    {
        printf("%d ",i*2);
        i++;
    }
    getch();
    return 0;
}