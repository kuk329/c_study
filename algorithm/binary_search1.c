// binary search - recursive implementation
#include<stdio.h>


int binarySearch(int arr[], int x, int low , int high){

    if(high>=low){
        int mid=(low+high)/2;

        if(arr[mid]==x)
            return mid;
        
        if(arr[mid]>x)
            return binarySearch(arr,x,low,mid-1);

        if(arr[mid]<x)
            return binarySearch(arr,x,mid+1,high);
    }
    return -1;


}


int main(void){


    int arr[]={2,3,4,10,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 100; // 찾고싶은 값
    int result = binarySearch(arr,x,0,n-1);
    if(result==-1){
        printf("Element is not present in array");
    }else{
        printf("Element is present at index %d\n",result);
    }



    return 0;
}