#include<stdio.h>
int main(){
    int array[5]= {10, 20, 30, 40, 50};
//    printf("0th index er address - %p\n", &array[1]);
//    printf("0th index er address - %p\n", array);
//    printf("0th index er value - %d\n", array[0]);
   printf("0th index er value - %d\n", *array);
   printf("1st index er value - %d\n", array[1]);
//    printf("1st index er value - %d\n", *(array+1));

printf("%d\n", *(1+array));

    return 0;
}