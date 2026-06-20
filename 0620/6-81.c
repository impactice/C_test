#include<stdio.h>
int main() {
    int a[3]={1,2};
    int *p=a+1;
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d %d %d\n",*a,*(a+1),*(a+2)); // 배열 이름 자체가 포인터
    printf("%d %d %d\n",*(p-1),*p,*(p+1));
    printf("%d %d %d\n",p[-1],p[0],p[1]);
    return 0;

}