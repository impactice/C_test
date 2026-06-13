#include<stdio.h>
int main() {
    float a=1.234;
    int b=10;
    
    printf("%.2f\n",a);     //소수점 2자리
    printf("%5.1f\n",a);    //전체5칸에서 소수점 1자리
    printf("%05.1f\n",a);   //앞에 0을 채우고 전체 5칸에서 소수점 1자리
    printf("%-05.1f\n",a);  //전체 5칸에서 소수점 1자리, 왼쪽정렬
    printf("%5d\n",b);      //전체 5칸에서 정수 출력
    printf("%05d\n",b);     //전체 5칸에서 앞에 0을 채우고 정수 출력
    printf("%-5d\n",b);     //전체 5칸에서 정수 출력, 왼쪽 정렬
    printf("%-05d\n",b);    //전체 5칸에서 앞에 0을 채우고 정수 출력, 왼쪽정렬
    return 0;
}