//Write a program to calculate the factorial of a number (e.g., 5!) using a for loop.

#include<stdio.h>

int main()
{
    int counter,factorial;
    printf("enter the number you want to factorise ! ");
    scanf("%d",&counter);

    while (factorial<=counter)
    {
        factorial*=counter;
        counter++;

    }

    printf("factorial : %d\n",factorial);

    return 0;
    
}