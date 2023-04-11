#include<stdio.h>

// 사용자 정의 함수의 선언 및 정의
// int 형식 자료 둘을 매개변수로 받아 합산 결과를 반환
int Add(int a, int b){

    int nData=0;
    nData=a+b;
    return nData;
}

int main(void){

    int nResult=0;

    nResult=Add(3,4);
    printf("Result : %d\n",nResult);

    return 0;
}