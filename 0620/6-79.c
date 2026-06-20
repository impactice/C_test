#include<stdio.h>
int main() {
    int a=10;
    int* b=&a;
    //b: 포인터 b의 값
    //*b: 포인터 b가 가리키는 값
    // &a: a의 주소값
    printf("%d %d %d",a,*b,*(&a)); 
    return 0;
}