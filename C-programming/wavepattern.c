#include<stdio.h>
int main(){
    int mat[3][3]={1,2,3,4,5,6,7,8,9};

    for(int col=0;col<3;col++){
        //col ->index
        if(col%2==0){
            for(int row=0;row<3;row++){
                printf("%d ",mat[row][col]);
            }
        }else{
            for(int row=2;row>=0;row--){
                printf("%d ",mat[row][col]);
            }
        }
    }
}