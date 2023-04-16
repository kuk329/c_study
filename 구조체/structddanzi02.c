#include<stdio.h>
#include<stdlib.h> // malloc
#include<string.h> // strcpy

typedef struct USERDATA
{
    int nAge;
    char szName[32];
    char szPhone[32];

} USERDATA;

int main(void)
{

    // USERDATA 구조체에 대한 포인터 변수 선언 및 정의
    USERDATA *pUser=NULL;

    // USERDATA 구조체가 저장될 수 있을수 있는 크기의 메모리 동적 할당
    pUser = (USERDATA*)malloc(sizeof(USERDATA));

    // 포인터 이므로 '.' 이 아니라 '->' 연산자로 멤버에 접근
    pUser->nAge = 10;
    strcpy(pUser->szName,"bear");
    strcpy(pUser->szPhone,"010-9999-3333");

    printf("%d살\t%s\t%s\n",pUser->nAge,pUser->szName,pUser->szPhone);
    
    free(pUser);

    return 0;
}