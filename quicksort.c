#include <stdio.h>

void artrav(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];             //the first element is the pivot
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)                   //i finds element that is greater than pivot from low+1
        {
            i++;
        }

        while (A[j] > pivot)                    //j finds the element lower than pivot from the end
        {
            j--;
        }

        if (i < j)                              //swapping A[i] and A[j] if i < j
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int arr[],int low,int high){
    int partitionindex; //index of pivot after partition

    if(low<high){
        partitionindex=partition(arr,low,high);
        quicksort(arr,low,partitionindex-1);    //sort left sub array
        quicksort(arr,partitionindex+1,high);       //sort right sub array
    }

}

int main(){

    int arr[]={3,5,2,13,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    artrav(arr,size);
    quicksort(arr,0,size-1);
    artrav(arr,size);
    return 0;
}
