#include<stdio.h>
int main(){

    switch ('e'){
        case 'b':
            printf("the character is b\n");
            break;
        case 'c':
            printf("the character is c\n");
            break;
        case 'a':
            printf("the character is a\n");
            break;
        case 'd':
            printf("the character is d\n");
            break;
        default:
            printf("No matched character");
    }
}
