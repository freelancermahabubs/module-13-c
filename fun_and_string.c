#include<stdio.h>
#include<string.h>

void fun (char arr[]){
    // int sz = sizeof(arr)/sizeof(char);
    printf("%d", strlen(arr));
}
int main(){

    char arr[6] = "Hello";

    fun(arr);
    return 0;
}