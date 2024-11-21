//Write a program to print numbers from 1 to 10 using a for loop.
 
 #include<stdio.h>

 int main()
 {

    int i=1,sum=0;

    while(i<=10){
        sum+=i;
        i++;
    }

    printf("the sum of first 10 natural numbers : %d\n",sum);

    return 0;
 }