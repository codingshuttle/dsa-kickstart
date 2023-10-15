#include<stdio.h>
int main(){
    int numOfLines = 7;
    for(int i=1;i<=numOfLines;i++){
        for(int j=1;j<=3;j++){
            printf("%c ", '*');
        }
        printf("\n");
    }
}