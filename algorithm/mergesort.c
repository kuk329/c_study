#include<stdio.h>



void merge(int a[],int low, int mid, int high){
    int 
}
void mergeSort(int a[], int low,int high){

    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }

}

int main(){
    int arr[6]={3,4,5,2,1,6};
    int i;

    // 합병 정렬
    mergeSort(arr,0,len(arr)-1);

    // 정렬 결과 출력
    for(i=0; i<6; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}