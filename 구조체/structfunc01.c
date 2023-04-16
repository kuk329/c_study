#include<stdio.h>

// 구조체 선언 및 형 재선성
typedef struct USERDATA
{
    int nAge;
    char szName[32];
    char szPhone[32];
} USERDATA;

// 구조체 형식을 반환하는 함수 선언 및 정의
USERDATA GetUserData(void)
{
    USERDATA user={0};
    scanf("%d%*c",&user.nAge);
    gets(user.szName);
    gets(user.szPhone);
    return user;

}

int main(void)
{
    USERDATA user={0};

    // 함수가 반환한 구조체를 저장하고 출력
    user=GetUserData();
    printf("%d살\t%s\t%s\n",user.nAge,user.szName,user.szPhone);
    return 0;
}