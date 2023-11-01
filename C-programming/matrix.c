#include<stdio.h>
int main(){

    //declaration
    int mat[2][3]={{1,2,3},{4,5,6}};

    //print->row wise traversal
    // for(int i=0;i<2;i++){
    //     //i is the index of outer array
    //     //mat[i]->the array itself
    //     for(int j=0;j<3;j++){
    //         //mat[i][j]->is the value
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }

    //print->col wise traversal
    // for(int j=0;j<3;j++){
    //     //j is the index of inner array
    //     //mat[j]->the array itself
    //     for(int i=0;i<2;i++){
    //         //mat[i][j]->is the value
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }

     for(int i=0;i<2;i++){
        //i is the index of outer array
        //mat[i]->the array itself
        for(int j=0;j<3;j++){
            //mat[i][j]->is the value
            scanf("%d",&mat[i][j]);
        }
    }

     for(int i=0;i<2;i++){
        //i is the index of outer array
        //mat[i]->the array itself
        for(int j=0;j<3;j++){
            //mat[i][j]->is the value
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}