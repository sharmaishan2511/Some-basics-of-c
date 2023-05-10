#include<stdio.h>
#define min
int binarysearching(int arr[],int l,int r,int x){
    int mid;
    if(l<=r){
        mid=(l+r)/2;

        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            return binarysearching(arr,mid+1,r,x);
        }
        if(arr[mid]>x){
            return binarysearching(arr,l,mid-1,x);
        }
    }
}

int exponentsearch(int arr[],int size,int x){
    if(arr[0]==x){
        return 0;
    }
    int i = 1;
    while(i<size && arr[i]<=x){
        i=i*2;
    }
    return binarysearching(arr,i/2,min(i,size-1),x);
}

int main(){

    int arr[]={1,2,5,6,23,55,89,90,193,3900};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",exponentsearch(arr,size,3900));

    return 0;
}
