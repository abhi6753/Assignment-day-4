//10. Write a program to print a table of 5
#include<stdio.h>
#include<conio.h>
int main()
{
    short i =1;
    while(i<=10)
    {
        printf("5 * %d = %d\n",i,5*i);
        i++;
    }
    getch();
    return 0;
}