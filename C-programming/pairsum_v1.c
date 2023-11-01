#include<stdio.h>
int main(){
    int arr[7]={3,6,7,9,14,19,23};
    int target=100;
    int n=7;

    //fixnum+options=target
    int flag=0;
    for(int i=0;i<n;i++){
        int fix_num=arr[i];
        for(int j=i+1;j<n;j++){
            int option=arr[j];
            int current_sum=fix_num+option;
            if(current_sum==target){
                printf("Yes\n");
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("NO");
    }
}