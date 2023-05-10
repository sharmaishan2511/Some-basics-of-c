#include <stdio.h>

void artrav(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merging(int arr[],int mid,int low,int high){
    int i,j,k,B[100];
    i = low;
    j = mid+1;
    k = low;

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){              //compare i and j in the same array whichever is smaller gets copied in B
            B[k]=arr[i];
            i++;k++;
        }
        else{
            B[k]=arr[j];
            j++;k++;
        }
    }

    while(i<=mid){                              //some elements of i and j might be remaining
        B[k]=arr[i];
        i++;k++;
    }
    while(j<=high){
        B[k]=arr[j];
        j++;k++;
    }

    for(int i = low;i<=high;i++){
        arr[i]=B[i];                                //copy B in arr back
    }
}

void mergesort(int arr[],int low,int high){                             //divide and conquer
    if(low<high){
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merging(arr,mid,low,high);
    }
}

int main(){

    int arr[]={3,5,2,13,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    artrav(arr,size);
    mergesort(arr,0,size-1);
    artrav(arr,size);
    return 0;
}
