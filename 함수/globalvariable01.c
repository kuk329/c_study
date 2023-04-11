#include<stdio.h>

// 전역변수의 선언 및 정의
//모든 함수에서 접근 가능
int g_nCounter=0;

void InitCounter(int nData)
{
    g_nCounter=nData; //전역변수 g_nCounter 값을 초기화 한다.
}

void IncreaseCounter(){

    g_nCounter++; // 전역변수 값 증가

}

int main(void)
{

    InitCounter(10);
    printf("%d\n",g_nCounter);
    IncreaseCounter();
    printf("%d\n",g_nCounter);
    IncreaseCounter();
    printf("%d\n",g_nCounter);
    return 0;
}