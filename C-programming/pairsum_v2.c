#include<stdio.h>
int main(){
    int arr[7]={3,6,7,9,14,19,23};
    int target=21;
    int n=7;

    //fixnum+options=target
    int flag=0;
    int i=0, j=n-1;
    while(i!=j){
        int current_sum=arr[i]+arr[j];
        if(current_sum==target){
            flag=1;
            break;
        }
        else if(current_sum<target){
            i++;
        }
        else{
            j--;
        }
    }

    if(flag==1){
        printf("YES");
    }
    else if(flag==0){
        printf("NO");
    }
}