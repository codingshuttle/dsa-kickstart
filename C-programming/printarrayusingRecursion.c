#include<stdio.h>

void helper(int arr[],int idx){
    if(idx==-1){
        return;
    }

    //idx is the index of the last element of the array->this denotes the last element pos
    
    helper(arr,idx-1);  //recursive call
    printf("%d ",arr[idx]);
}
int main(){
    int arr[5]={1,3,2,4,7};
    helper(arr,4);
}