#include<stdio.h>
#include<string.h>
int main(){
    //char str[10]={'p','r','o','g','r','a','m','\0'};
    //size of the array=10, 7 characters
    // for(int i=0;i<7;i++){
    //     printf("%c\n",str[i]);
    // }

    // printf("%s",str);

    char str[20]="coding shuttle";
    // scanf("%s",str);
    //gets(str);
    //scanf("%[^t]s",str);
    // printf("the character array is:\n%s",str);
    //1.strlen
    // printf("The length of the array is %d",strlen(str));
    //2.strcpy(destination, source);

    char temp[20]="coding";

    // strcpy(temp,str);
    // printf("%s",temp);
    //3.strcmp -->to compare twp strings-->returns 0 if they are equal

    if(strcmp(str,temp)==0){
        printf("The arrays are equal");
    }
    else{
        printf("The arrays are not equal");
    }

}