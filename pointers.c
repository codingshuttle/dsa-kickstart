#include<stdio.h>
int main(){
    int a=5;
    // printf("value: %d\n", a);
    // printf("address: %d\n", &a);
    // printf("value_from_addr: %d\n", *(&a));

    int* ptr = &a;
    int value = *ptr;
    printf("%d", value);

}