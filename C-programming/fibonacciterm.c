#include<stdio.h>
int helper(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int result = helper(n-1)+helper(n-2);
    return result;
}
int main(){
    int n=12;
    int ans = helper(n);
    printf("The %d-th term is %d\n",n,ans);
}