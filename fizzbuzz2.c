/*
 * =====================================================================================
 *
 *       Filename:  fizzbuzz2.c
 *
 *    Description:  FizzBuzz (summation version)
 * =====================================================================================
 */
#define COUNT (1000)
#include <stdio.h>

int main(void){
    int i=0;
    int fizz=3;
    int buzz=5;
    short guard=0;

    for(i=1;i<COUNT;i++){
        if(i==fizz){
            printf("Fizz");
            fizz+=3;
            guard=1;
        }
        if(i==buzz){
            printf("Buzz");
            buzz+=5;
            guard=1;
        }
        if(guard==0)
            printf("%d",i);
        printf("\n");
        guard=0;
    }
    return 0;
}
