#include<stdio.h>

int Add(int,int); // 함수의 원형 선언

int main(void)
{
    printf("%d\n",Add(3,4));
    return 0;
}

int Add(int x, int y){

    return x+y;
}