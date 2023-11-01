#include<stdio.h>
int main(){
    // int arr[5]={4,5,1,2,3};
    // //i have to acess 2nd element of the array
    // //2nd element->index=1
    // printf("2nd element of the array: %d\n", arr[1]);

    // arr[1]=10; // 4,10,1,2,3
    // printf("updated 2nd element of the array: %d\n", arr[1]);
    
    // for(int i=0;i<=4;i++){
    //     printf("%d ", arr[i]);
    // }

    int arr[5]={0};
    printf("please enter the 5 values:\n");
    //taking user input for an array
    for(int i=0;i<=4;i++){
        //value save at arr[i]
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    printf("The array entered is:\n");
    //printing the array
    for(int i=0;i<=4;i++){
        printf("%d ", arr[i]);
    }


    
}