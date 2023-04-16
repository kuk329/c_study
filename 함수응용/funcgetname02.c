#include<stdio.h>
#include<stdlib.h>

// 주소를 반환하는 사용자 정의 함수 선언 및 정의
char* GetName(void)
{
    char *pszName=NULL;

    // 메모리를 동적 할당.
    pszName=(char*)calloc(32,sizeof(char));

    printf("이름을 입력하세요 : ");

    gets(pszName);
    return pszName;


}

int main(void)
{
    char *pszName=NULL;

    // 이름이 저장된 동적 할당된 메모리의 주소를 받는다.
    pszName=GetName();
    printf("당신의 이름은 %s입니다.\n",pszName);

    free(pszName);
    return 0;

}