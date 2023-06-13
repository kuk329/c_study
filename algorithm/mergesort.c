//gcc 7.4.0

#include<stdio.h>
#include<stdlib.h>
#define max 6
// mergeSort  분할 정복의 대표적인 알고리즘. (divide & conquer)
// 중요 함수가 2개 각각 분할과 정복을 담당

// conquer
void merge(int a[], int low, int mid, int high) {

    int b[1000] = {0}; // 정렬하는 값을 임시로 저장할 배열

    int i = low; // 왼쪽 배열 시작점
    int j = mid + 1; // 오른쪽 배열 시작점
    int k = 0;


    while (i <= mid && j <= high) { // 두 배열 정렬

        if (a[i] < a[j]) {
            b[k] = a[i]; // 임시 배열에 저장
            i++;
        }
        if (a[i] > a[j]) {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    // 비교후 남은 부분 정리
    while (i <= mid) { // 아직 왼쪽 배열이 남아있으면
        b[k] = a[i];
        i++;
        k++;
    }


    while (j <= high) { // 아직 오른쪽 배열이 남아있으면
        b[k] = a[j];
        j++;
        k++;
    }

     k--; // 배열 index를 넘어가지 않게 조절 (마지막 index 위치로 )

  

    // 원래 배열에 정렬된 데이터 복사
    while (k >= 0) {
        a[low + k] = b[k];
        k--;
    }

  

   

}

// divide
void mergeSort(int a[], int low, int high) {

    if (low < high) {
        int mid = (low + high) / 2;
     

        mergeSort(a, low, mid); // left
        mergeSort(a, mid + 1, high); // right

        merge(a, low, mid, high); // left , right 를 merge

    }
 

}

void printArr(int a[], int end) {


    for (int i = 0; i < end; i++) {
        printf("%d \t", a[i]);
    }

    printf("\n");

    return;

}

int main(void)
{
    printf("test\n");
    int a[max] = { 20,10,70,80,40,90 };

    printArr(a, max-1); // 배열 출력
    mergeSort(a, 0, max-1); //  병합 정렬
    printf("======== 정렬 후========\n");
    printArr(a, max-1); //배열 출력


    return 0;


}