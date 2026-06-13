#include<stdio.h>

int main() {
    int a; 
    char b; 
    //입력함수
    scanf("%d %c", &a, &b); //&는 래퍼런스, 주소값을 의미
    printf("a는 %d,b는 %c입니다.", a, b);

    return 0;
}