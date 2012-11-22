/*
 * =====================================================================================
 *
 *       Filename:  fizzbuzz3.c
 *
 *    Description:  Fizz Buzz (countdown version)
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
        fizz--;
        buzz--;

        if(fizz==0){
            printf("Fizz");
            guard=1;
            fizz=3;
        }
        if(buzz==0){
            printf("Buzz");
            guard=1;
            buzz=5;
        }
        if(guard==0){
            printf("%d",i);
        }
        printf("\n");
        guard=0;

    }
    return 0;
}
