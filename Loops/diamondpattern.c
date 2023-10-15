#include<stdio.h>
int main(){
    //part-1
    int numoflinesPart1=4;  //n
    for(int i=1;i<=numoflinesPart1;i++){
        //n-i spaces, 2*i-1 num of stars
        for(int j=1;j<=numoflinesPart1-i;j++){
            printf(" ");
        }

        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }

    //part-2
    int numoflinesPart2=3;
    //oddnumberidea
    // for(int i=1;i<=numoflinesPart2;i++){
    //     //spaces
    //     for(int j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     //2x-1 num of stars, where x = n-i+1
    //     int x = numoflinesPart2-i+1;
    //     int numOfStars = 2*x-1;
    //     for(int j=1;j<=numOfStars;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //breakwala idea
    for(int i=1;i<=numoflinesPart2;i++){
        //spaces
        for(int j=1;j<=i;j++){
            printf(" ");
        }

        //n-i+1 stars

        //n-i stars

        //stars = 2*(n-i) + 1
        int numofStars = 2*(numoflinesPart2-i)+1;
        for(int j=1;j<=numofStars;j++){
            printf("*");
        }

        printf("\n");

    }
}