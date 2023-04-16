#include<stdio.h>
#include<string.h>

int main(void)
{
    char szBuffer[12]={"TestString"};
    char *pszData = "TestString";

    // 두 메모리에 저장된 값이 같은 경우 -> 0
    printf("%d\n",memcmp(szBuffer,pszData,10));

    // 
    return 0;
}