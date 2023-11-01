#include<stdio.h>
int main(){
    // for(int i=1;i<=20;i++){
    //     if(i%2==0){
    //         //this is an even number
    //         printf("%d ",i);
    //     }
    // }

    for(int i=1;i<=20;i++){
        if(i%2!=0){
            //this is an odd number
            continue;
        }
        printf("%d ",i);
    }
}