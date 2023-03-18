#include<stdio.h>

// 형식문자 %s를 이용하면 scanf() 함수도 gets() 함수처럼 문자열을 입력받을수 있다.
// 문자열은 문자 배열이므로 char 배열에 저장.

int main(void)
{
    // 문자열을 저장하기 위한 배열 선언 및 정의
    char szBuffer[32]={0};

    // 사용자가 입력한 문자열을 배열에 저장하고 출력
    scanf("%s",szBuffer); // 배열 이름자체가 주소이므로 &szBuffer라고 쓸필요 없음
    printf("%s\n",szBuffer);

    return 0;
}