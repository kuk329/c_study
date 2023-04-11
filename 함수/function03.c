#include<stdio.h>

int GetMax(int a, int b, int c){
    
    // GetMax() 함수의 지역변수 선언 및 정의
    int nMax=a;
    if(b>nMax) nMax=b;
    if(c>nMax) nMax=c;
    return nMax;
}

int main(void)
{

    int nReulst=0;

    printf("MAX : %d\n",GetMax(1,2,3));

    printf("MAX : %d\n",GetMax(1,2,3)*3);

    printf("MAX : %d\n",nReulst=GetMax(1,2,3));
}