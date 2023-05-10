//switch case
#include <stdio.h>

int main(){
    int a,b;
    char c;

    scanf("%d %c %d",&a,&c,&b);

    switch(c){
    case '+':
                printf("%d",a+b);
                break;                                  //break is important otherwise it will continue all the other cases
    case '-':
                printf("%d",a-b);
                break;
    default:
                printf("Invalid Operator");

    }

    return 0;
}
