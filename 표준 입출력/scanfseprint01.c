#include<stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("두 정수를 입력하세요. : ");
    // 사용자로부터 두 정수를 입력받아 x와 y에 순서대로 저장한다.
    // %d와 %d 사이에 공백이 없다는 점에 주의한다.
    scanf("%d%d",&x,&y);// scanf함수는 같은 형식 문자 두개가 연이어 붙어 있으면, 빈칸 tab키, enter키 입력으로 각 형식문자에 대한
    //입력을 구별한다.

    //x와 y의 합을 출력한다.
    printf("두 수의 합은 %d 입니다.\n",x+y);
    return 0;
}