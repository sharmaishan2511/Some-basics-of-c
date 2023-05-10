#include <stdio.h>

int main(){
    int a[3][3];
    int rowm;
    int colm;
    int row_total[3];
    int col_total[3];

    for(int i = 0;i<3;i++){
        rowm=1;
        for(int j = 0;j<3;j++){
            scanf("%d",&a[i][j]);
            rowm*=a[i][j];
        }
        row_total[i]=rowm;
    }

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\t%d\n",row_total[i]);
    }

    for(int i = 0;i<3;i++){
        colm=1;
        for(int j = 0;j<3;j++){
            colm *=a[j][i];
        }
        col_total[i]=colm;
    }

    for(int i = 0;i<3;i++){
        printf("%d ",col_total[i]);
    }
    return 0;
}
