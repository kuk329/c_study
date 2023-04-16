#include<stdio.h>
#include<string.h>

// 구조체 선언 및 형 재선언
typedef struct userdata
{
    int nAge;
    char szName[32];
    char szPhone[32];
}userdata;

int main(void)
{
    // 형 재선언으로 변수를 선언할 때 'struct' 생략 가능
    userdata user={0,"",""};

    // 구조체 멤버 접근 및 값 채우기
    user.nAge=22;
    strcpy(user.szName,"Jenny");
    strcpy(user.szPhone,"010-1234-5678");

    // 구조체 멤버 접근 및 출력
    printf("%d살, %s, %s\n",user.nAge,user.szName,user.szPhone);
    return 0;
}