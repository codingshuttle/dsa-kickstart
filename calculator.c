#include<stdio.h>
int main(){
    int a=0, b=0;
    int ans=0;
    printf("Please enter the 2 numbers: \n");
    scanf("%d %d", &a, &b);
    
    printf(" + -> a\n - -> s\n * -> m\n / -> d\n");
    printf("Please enter the character for operation\n");
    char ch;
    scanf(" %c", &ch);

    switch (ch){
        case 'a':
            ans=a+b;
            break;
        case 's':
            ans=a-b;
            break;
        case 'm':
            ans=a*b;
            break;
        case 'd':
            ans=a/b;
            break;
        default:
            printf("The character pressed is invalid");
    }
    printf("The answer is %d\n", ans);
}