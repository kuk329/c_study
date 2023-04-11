#include<stdio.h>

void InitList(int *pList,int nSize)
{
    int i=0;
    for(i=0; i<nSize; ++i)
    {
        printf("정수를 입력하세요 : ");
        scanf("%d",&pList[i]);
    }
}


// 요소가 int 형식인 배열이라면 요소의 개수와 상관없이 정렬할 수 있다
void SortList(int *pList, int nSize){
    int i=0,j=0,nTmp=0;

    for(i=0; i<nSize-1; ++i){
        for(j=i+1; j<nSize; ++j){
            if(pList[i]>pList[j]){
                nTmp=pList[j];
                pList[j]=pList[i];
                pList[i]=nTmp;
            }
        }
    }

}

void PrintList(int *pList, int nSize){
    int i=0;
    for(i=0; i<nSize; ++i){
        printf("%d\t",pList[i]);
        putchar('\n');
    }
}


int main(void)
{
    int aList[5]={0};

    InitList(aList,5);
    SortList(aList,5);
    PrintList(aList,5);
    return 0;
}