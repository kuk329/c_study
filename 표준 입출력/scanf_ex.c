#include<stdio.h>

// 사용자로부터 이름과 나이를 입력받아 한번에 출력하는 프로그램 작성.
// 입력을 받을때 이름은 gets(), 나이는 scanf() 로 받는다.
// 두 정보는 printf() 로 한번에 출력

int main(void){

    printf("나이를 입력하세요 : ");
    int age=0;
    scanf("%d",&age);
    getchar(); 
    printf("이름을 입력하세요 : ");
    char szName[30]={0};
    gets(szName);
    printf("당신의 나이는 %d살이고 이름은 %s입니다.\n",age,szName);
    return 0;
}