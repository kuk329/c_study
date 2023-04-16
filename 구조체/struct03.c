#include<stdio.h>

// 구조체 선언
typedef struct MYBODY{
    int nHeight;
    int nWeight;

} MYBODY;


// 구조체를 멤버로 가지는 USERDATA 구조체 선언
typedef struct USERDATA{
    char szName[32];
    char szPhone[32];
    MYBODY body;

}USERDATA;

int main(void)
{
    USERDATA user={
        "Hoon",
        "1234",
        {180,45} // MYBODY 구조체 멤버 초기화
    };

    printf("%s , %s , %d , %d\n",user.szName,user.szPhone,user.body.nHeight,user.body.nWeight);

    return 0;
}