#include <stdio.h>

void artrav(int arr[],int n){

    for (int i = 0; i<n ; i++){
        printf("%d\n",arr[i]);
    }

}

void insertionsort(int arr[],int n){

    for(int i = 1;i<n;i++){                                    //start from i = 1
        int j = i-1;                                           //predecessor of i
        int key = arr[i];                                      //the element at index 1 is saved in key later to be replaced

        while(j>=0 && arr[j]>key){                             //skipping element one step ahead till the element
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;                                           //assigning the key
    }

}

int main(){

    int arr[]={12,11,13,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    artrav(arr,size);
    insertionsort(arr,size);
    artrav(arr,size);
    return 0;
}
