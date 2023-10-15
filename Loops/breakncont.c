#include<stdio.h>
int main(){

    // for(int i=1;i<=5;i++){
    //     printf("%d\n", i);

    //     if(i==3){
    //         continue;
    //     }

    //     printf("inside loop\n");
        
    // }
    // printf("I am out of the loop");

    int i=1;
    while(i<=5){
        printf("inside loop\n");
        if(i==3){
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
}