#include<stdio.h>

int main(void){

    int nAge=0;
    printf("나이를 입력하세요 : ");
    scanf("%d",&nAge);
    getchar();

    char szName[12]={0};
    printf("이름을 입력하세요 : ");
    gets(szName);

    printf("%d , %s \n",nAge,szName);

    puts("hi everyone");

    return 0;
}