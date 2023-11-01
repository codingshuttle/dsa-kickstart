#include<stdio.h>

int getMaxOf3(int a, int b, int c){
    int maxNum = 0;
    if(a>=b && a>=c){
        maxNum=a;
    }
    else if(b>=a && b>=c){
        maxNum=b;
    }
    else if(c>=a && c>=b){
        maxNum=c;
    }
    return maxNum;
}

int main(){
    printf("Please enter the 3 numbers\n");
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = getMaxOf3(a,b,c);
    printf("The maximum of the numbers is %d\n", ans);
}
