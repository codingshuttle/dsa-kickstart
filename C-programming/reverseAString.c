#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("please enter a word\n");
    scanf("%s", str);

    //logic
    int len = strlen(str);
    int i=0, j=len-1;
    while (i!=j){
        //swap the two characters
        char var=str[i];
        str[i]=str[j];
        str[j]=var;

        //increment and decrement
        i++;
        j--;
    }
    printf("%s\n",str);
}