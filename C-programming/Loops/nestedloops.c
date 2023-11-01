#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=5;j++){
            printf("%d ",j);
            
        }
        if(i==3){
            break;
        }
        printf("\n");
    }
}