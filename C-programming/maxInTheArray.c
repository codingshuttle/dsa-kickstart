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
    int ans=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>ans){
            //i have recieved a greater value
            ans=arr[i];
        }
    }

    printf("The max in the array is %d\n", ans);
}