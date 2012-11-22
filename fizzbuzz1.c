/*
 * =====================================================================================
 *
 *       Filename:  fizzbuzz1.c
 *
 *    Description:  Fizz Buzz (naive implementation)
 * =====================================================================================
 */

#define COUNT (1000)
#include <stdio.h>

int main(void){
    int i=0;
    short guard=0;
    for(i=1;i<COUNT;i++){
        if(i%3==0){
            printf("Fizz");
            guard++;
        }
        if(i%5==0){
            printf("Buzz");
            guard++;
        }
        if(guard==0)
            printf("%d",i);
        printf("\n");
        guard=0;
    }
    return 0;
}
