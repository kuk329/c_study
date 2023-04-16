#include<stdio.h>
#include<stdlib.h> // malloc(), calloc()
#include<string.h> // memset()

int main(void)
{
    int *pList = NULL, *pNewList = NULL;

    int aList[3]={0}; // int형 배열 3개 선언

    pList= (int*)malloc(sizeof(int)*3); // int 형 3개를 담을수 있는 크기의 메모리를 동적으로 할당 후
    memset(pList,0,sizeof(int)*3); // 메모리를 0 으로 초기화
    pNewList = (int*)calloc(3,sizeof(int)); // int 형 3개를 담을수 있는 크기의 메모리를 0으로 초기화한후 할당

    //동적 할당한 메모리 해제 
    free(pList);
    free(pNewList);
    return 0;
}