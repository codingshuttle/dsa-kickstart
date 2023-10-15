#include<stdio.h>
int main(){
    int a=2, b=6;

    //product>20, sum> or equal to 15 ->
    //product>20 , sum<15->
    //no such values found

    int product=a*b;
    int sum=a+b;

    /*
    if(product>20 && sum>=15){
        printf("prod grtr than 20, sum grtr than 15");
    }
    else if(product>20 && sum<15){
        printf("prod grtr than 20, sum less than 15");
    }
    else{
        printf("no such values");
    }
    */

   if(product>20){
        if(sum>=15){
            printf("prod grtr than 20, sum grtr than 15");
        }
        else{
            printf("prod grtr than 20, sum less than 15");
        }
   }
   else{
        printf("no such values");
   }
}