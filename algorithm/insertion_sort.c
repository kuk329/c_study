// 삽입 정렬(Insertion sort) 
// 값들이 얼마나 기존에 정렬이 되어있느냐에 따라서 빨라질수 있다.
// 같은 시간 복잡도를 갖는 bubble sort, selection sort 중에 가장 빠를수 있다.  O(n^2)
#include<stdio.h>

void insertion_sort(int arr[],int n){

    int i,j,key;
    for(i=1; i<n; i++){
        key=arr[i]; // index 1번부터 제자리 찾기
        for(j=i-1; j>=0 && arr[j]>key; j--){
            arr[j+1]=arr[j]; // 한칸씩 오른쪽으로 이동
        }
        arr[j+1]=key;

    }

}

void print_arr(int arr[],int n){

    int i;
    for(i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}

int main(void)
{

    int arr[6]={3,5,8,1,2,7};
    print_arr(arr,6);
    printf("=========== 정렬 후 ==========\n");
    insertion_sort(arr,6);
    print_arr(arr,6);
    
    return 0;

}