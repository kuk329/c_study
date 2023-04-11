#include<stdio.h>

// 계승을 계산하는 기능을 구현한 함수의 선언 및 정의
int GetFactorial(int nParam){

    int nResult=1,i=0;

    if(nParam<1||nParam>10){
        // 매개변수로 전달 받은 값이 유효하지 않다는 메시지를 출력.
        // '메시지 출력'은 UI에 해당하므로 함수 내에서
        // 처리하는 것은 바람직하지 않음.
        puts("ERROR: 1~10사이의 정수를 입력하세요.");
        return 0;
    }
    
    // 계승을 계산하고 반환
    for(i=1;i<=nParam; i++){
        nResult*=i;
       
    }
     return nResult;

}

int main(void)
{
    printf("MAX : %d\n",GetFactorial(1));
    printf("MAX : %d\n",GetFactorial(5));

    printf("MAX : %d\n",GetFactorial(11));
    printf("MAX : %d\n",GetFactorial(10));

}