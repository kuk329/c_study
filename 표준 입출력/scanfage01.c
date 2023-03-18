#include<stdio.h>

int main(void)
{
    char szName[32]={0};
    int nAge=0;
    
    // 사용자로부터 정수를 입력받아 nAge 변수에 저장.
    printf("나이를 입력하세요 : ");
    scanf("%d",&nAge); // scanf사용시 enter(개행문자)가 버퍼에 남음 

    // 이름 중간에 빈 공백이 있더라도 문제없이 입력 가능.
    printf("이름을 입력하세요 : ");
    gets(szName);

    // 이름과 나이를 출력
    printf("%d, %s\n",nAge,szName);

    return 0;

}