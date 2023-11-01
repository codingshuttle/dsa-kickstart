#include<stdio.h>
int main(){
    int numOfLines = 7;

    for(int i=1;i<=numOfLines;i++){
        //have to print some spaces: numoflines-i
        for(int j=1;j<=numOfLines-i;j++){
            printf(" ");
        }

        //have to print numbers from 1 to i
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }

        printf("\n");
    }
}