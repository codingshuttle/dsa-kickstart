#include<stdio.h>
int main(){
    int numOfLines = 4;
    for(int i=1;i<=numOfLines;i++){
        for(int j=4;j>=1;j--){
            printf("%d ", j);
        }
        printf("\n");
    }
}