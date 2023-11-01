#include<stdio.h>
int main(){
    int numOfLines = 5;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c ", '*');
        }
        printf("\n");
    }
}