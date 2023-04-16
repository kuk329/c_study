#include<stdio.h>
#include<stdlib.h> // malloc 사용

int main(void)
{
    int *pList = NULL, i=0;

    pList = (int*)malloc(sizeof(int)*3);

    // 동적 할당한 대상 메모리를 배열 연산자로 접근한다.
    pList[0]=10;
    pList[1]=20;
    pList[2]=30;

    for(i=0; i<3; ++i)
        printf("%d\n",pList[i]);

    free(pList);


    return 0;
}