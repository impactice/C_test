#include <stdio.h>

int main() {
    int a=5.5;              //자동형 변환????
    double b = 10;          //자동형 변환
    int c = (int)5.5;       //명시적 형변환
    double d = (double)10;  //명시적 형변환
    int e = (int)d;         //명시적 형변환
    double f = (double)c;   //명시적 형변환

    printf("a : %d\n",a);
    printf("b : %f\n",b);
    printf("c : %d\n",c);
    printf("d : %f\n",d);
    printf("e : %d\n",e);
    printf("f : %f\n",f);

    return 0;
}