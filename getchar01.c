#include<stdio.h>

int main(void)
{
    gets();
    // 자료형이 char 형식이고 이름이 ch인 변수의 선언 및 정의
    char ch=0;

    // getchar() 함수가 반환한 값을 ch 변수에 저장한다.
    ch = getchar();
    // 변수 ch에 담겨있는 정보를 화면에 출력한다.
    putchar(ch);
    // 대문자 Z를 화면에 출력한다.
    putchar('\n');
    putchar('Z');
    // 0을 반환하고 main() 함수가 반환한다.
    return 0;
}