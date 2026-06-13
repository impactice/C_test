#include <stdio.h>

void fn() {
    static int a=3; //°íÁ¤
    int b =4;

    a=a+1;
    b= b+1;
    printf("%d %d\n",a,b);
}

int main() {
    fn();
    fn();
    return 0;
}