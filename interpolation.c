#include<stdio.h>
int interpol(int arr[],int lo,int hi,int x){
    int pos;

    if(lo<=hi && arr[lo]<=x && arr[hi]>=x){
        pos = lo+(((double)(hi-lo)/(arr[hi]-arr[lo]))*(x-arr[lo]));

        if(arr[pos]==x){
            return pos;
        }
        if(arr[pos]<x){
            return interpol(arr,pos+1,hi,x);
        }
        if(arr[pos]>x){
            return interpol(arr,lo,pos-1,x);
        }
    }

    return 0;
}


int main(){

    int arr[]={1,2,5,6,23,55,89,90,193,3900};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",interpol(arr,0,size-1,3900));

    return 0;
}
