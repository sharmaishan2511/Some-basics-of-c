#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}


void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++){
           if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);
           }
       }
   }
}

void artrav(int arr[],int n){

    for (int i = 0; i<n ; i++){
        printf("%d\n",arr[i]);
    }

}
int main(){

    int arr[]={5,1,4,2,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    artrav(arr,size);
    bubbleSort(arr,size);
    artrav(arr,size);
    return 0;
}
