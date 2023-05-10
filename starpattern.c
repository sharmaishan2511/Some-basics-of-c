#include <stdio.h>

int main(){
    int n,i=1,j;
    scanf("%d",&n);
    while(i<=n){
        j=1;
        do{
            printf(" *(%d,%d)",i,j);
            j++;
        }while(j<=n);
        printf("\n");
        i++;
    }

    return 0;
}
