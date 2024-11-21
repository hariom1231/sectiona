#include <stdio.h>

int main(){
    int counter;
    printf("printing numbers between 1 and 100 !\n ");
    
    for(counter=2;counter<=100;counter+=2)
    {
        printf("%d\n",counter);
    }
    return 0;
}