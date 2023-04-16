#include<stdio.h>

// 배열 실인수는 '포인터' 매개변수로 받는다.
// 포인터에는 요소의 개수 정보가 없으므로 int 매개변수가 더 필요하다.
// 만일 입력받아야 할 정수의 개수가 달라져도 이 함수 코드는 변하지 않음.
void InitList(int *pList, int nSize)
{
    int i = 0;
    for(i=0; i<nSize; i++){
        printf("정수를 입력하세요 : ");
        scanf("%d",&pList[i]);
    }

}

void SortList(int *pList,int nSize)
{
    int i=0,j=0,nTmp=0;

    for(i=0; i<nSize-1; ++i)
    {
        for(j=i+1; j<nSize; ++j){
            if(pList[j]<pList[i])
            {
                nTmp = pList[j];
                pList[j]=pList[i];
                pList[i]=nTmp;
            }
        }
    }
}

void PrintList(int *pList, int nSize)
{
    int i=0;
    for(i=0; i<nSize; i++)
    {
        printf("%d\t",pList[i]);
    }
    putchar('\n');
}


int main(void)
{
    // 자료구조를 지역변수로 선언했기 때문에 다른 함수에서는 직접 접근이 불가능.
    int aList[5]={0};

    InitList(aList,5); // 배열 이름 자체가 주소이므로 배열 이름으로 넘김
    SortList(aList,5);
    PrintList(aList,5);
    return 0;
}