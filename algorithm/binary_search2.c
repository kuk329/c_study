// binary search - iterative implementation
#include<stdio.h>

int binarySearch(int arr[], int x, int low, int high){

    while(low<=high){
        int mid = low+(high-low)/2; // mid = (low + high)/2 -> contains bugs.
        
        if(arr[mid]==x){
            return mid;
         }
        else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}

int main(void)
{
    int arr[]={2,3,4,10,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr,x,0,n-1);
    
    if(result==-1){
        printf("Element is not present in array");
    }else{
        printf("Element is present at index %d\n",result);
    }



    return 0 ;
}


