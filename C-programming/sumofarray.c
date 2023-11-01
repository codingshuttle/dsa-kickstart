#include<stdio.h>
int main(){
    int arr[5]={0};
    printf("please enter the 5 values:\n");
    //taking user input for an array
    for(int i=0;i<=4;i++){
        //value save at arr[i]
        scanf("%d",&arr[i]);
    }

    //logic
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("The sum of the array is %d\n", sum);
}