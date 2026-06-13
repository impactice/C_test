#include <stdio.h>
 
int main(){
    int a = 10;
    int b = 010;
    int c = 0x10;
    int d = 10u;
    float e = 3.14f;

    printf("%d %d %d %d\n",a,b,c,d);

    printf("%.2f",e);
} 