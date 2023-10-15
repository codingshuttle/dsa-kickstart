#include<stdio.h>

void helper(int a){
    a=a+1;
    printf("%d \n", &a);
    printf("Inside helper func: %d\n", a);
}

void passByRef(int* ptr){
    int value = *ptr;
    *ptr = value+1;
}
int main(){
    int a=12;
    //printf("%d \n", &a);
    printf("initial value bfr call: %d\n", a);

    int* ptr=&a;
    passByRef(ptr);
    printf("Inside main func: %d\n", *ptr);
}