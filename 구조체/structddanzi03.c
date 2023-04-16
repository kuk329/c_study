#include<stdio.h>

typedef struct USERDATA
{
    char szName[32];
    char szPhone[32];
    // USERDATA 구조체를 가리킬 수 있는 포인터를 멤버로 선언
    struct USERDATA *pNext;
    
} USERDATA;


int main(void)
{
    // 두 개의 USERDATA 구조체 인스턴스 선언 및 정의
    USERDATA user={"한소희","1234",NULL};
    USERDATA newUser={"차은우","5678",NULL};

    user.pNext = &newUser; // 두 인스턴스 연결

    printf("%s, %s\n",user.szName,user.szPhone);
    printf("%s, %s\n",user.pNext->szName,user.pNext->szPhone);

    return 0;

}