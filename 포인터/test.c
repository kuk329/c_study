#include<stdio.h>

int main(){

    char szBuffer[]={"Hello"};
    char *szPointer = szBuffer;
    int x = 10;
    int *pX=&x;

   // puts(szPointer);
   puts(szPointer);
   printf("%s\n",szPointer);
   printf("%d\n",*pX);
    return 0;
}