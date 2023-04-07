#include<stdio.h>

int main(void){

    //int 형식 변수 선언 및 정의
    int x=10;
    // 변수 x를 가리키는 int 형식에 대한 포인터 변수 선언 및 정의
    int *pnData=&x;

    printf("x : %d\n",x);

    //pnData 포인터 변수가 가리키는 대상 메모리를 int 형 변수로 간접지정하고 20 대입
    *pnData=20;

    printf("x : %d\n",x);
    
    return 0;
}