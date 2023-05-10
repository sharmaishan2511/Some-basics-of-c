#include<stdio.h>
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
int main(){

    int arr[]={1,2,5,6,23,55,89,90,193,3900};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",binarysearching(arr,0,size-1,3900));

    return 0;
}
