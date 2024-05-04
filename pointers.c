#include<stdio.h>
int main(){
    int x = 100;
    int * ptr = &x;
 
    x=200;
    printf("X er value - %d\n", x);
    printf("x er value - %d\n", *ptr);
    return 0;
}