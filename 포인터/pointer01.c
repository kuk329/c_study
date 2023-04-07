#include<stdio.h>

int main(void){

    int nData=10;
    printf("%s\n","nData"); 

    // 변수 nData에 들어 있는 값을 출력
    printf("%d\n",nData); // nData 에 저장된 값을 int형(10진수)으로 읽어서 출력
    // 변수 nData의 메모리 주소를 출력
    printf("%p\n",&nData); // %p는 값을 16진수로 출력하라는 뜻.

    return 0;
}