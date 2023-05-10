#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}


void artrav(int arr[],int n){

    for (int i = 0; i<n ; i++){
        printf("%d\n",arr[i]);
    }

}

void selectionsort(int arr[],int n){
    int i , j , minind;

    for(i = 0;i<n-1;i++){
        minind=i;                               //index of lowest number in subarray
        for(j = i+1;j<n;j++){
            if(arr[j]<arr[minind]){
                minind=j;
            }
        }
        swap(&arr[minind],&arr[i]);
    }
}

int main(){

    int arr[]={64,25,12,11,22};
    int size = sizeof(arr)/sizeof(arr[0]);
    artrav(arr,size);
    selectionsort(arr,size);
    artrav(arr,size);
    return 0;
}
