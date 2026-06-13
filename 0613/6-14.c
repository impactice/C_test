#include <stdio.h>
int a = 5; // 전역 변수 (블록에 안 속함)

// 함수 정의
void fn() {
    a = a+3;
}
int main() {
    int a= 1; // 지역변수(이게 있으므로써 결과 값이 6이 됨) 이거 없으면 13이 됨

    a=a+5;
    fn(); // 함수호출 
    printf("%d",a);
    return 0;
}