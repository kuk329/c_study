#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    // 선언한 배열 요소의 크기를 기술하지 않았지만 초기값을 기준으로 
    char szBuffer[]={"Hello"}; // 자동으로 크기가 결졍 된다. (NULL 문자 저장될 크기 포함.)

    char *pszBuffer = "Hello"; // "Hello" 문자열이 저장된 메모리의 주소로 초기화되는 포인터 변수 


    // 동적 할당한 메모리의 주소가 저장될 포인터 선언 및 정의
    char *pszData = NULL; 
    // 메모리를 동적으로 할당하고 "Hello" 문자열로 초기화
    pszData = (char*)malloc(sizeof(char)*6);
    pszData[0]='H';
    pszData[1]='e';
    pszData[2]='l';
    pszData[3]='l';
    pszData[4]='o';
    pszData[5]='\0';

    puts(szBuffer);
    puts(pszBuffer);
    puts(pszData);

    free(pszData); // 동적 할당한 메모리 해제 

    return 0;
}