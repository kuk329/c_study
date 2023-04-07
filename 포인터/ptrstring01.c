#include<stdio.h>
#include<string.h> // strlen() 함수 사용

int main(void)
{
    char szBuffer[16]={"Hello"};
    char *pszData = szBuffer;
    int nLength=0;

    while(*pszData!='\0'){
        // 포인터를 다음으로 한칸 이동 시킴
        pszData++;
        nLength++;
    }

    printf("Length : %d\n",nLength);
    printf("Length : %d\n",strlen(szBuffer));
    printf("Length : %d\n",strlen("World"));

    return 0;
}
