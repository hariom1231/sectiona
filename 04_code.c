#include<stdio.h>

int main(){

    int counter=2;
    printf("printing even numbers between 1 and 100 ! ");

    do
    {
        printf("%d\n",counter);
        counter+=2;
    } while (counter<=100);


    return 0;
}