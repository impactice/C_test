#include <stdio.h>
int main() {
    int x=3, y=3;
    int z = x++ + ++y;          // 현재 x값을 y 1증가한 값과 더하고 x 1증가
    printf("%d %d %d",x,y,z);   
    
    return 0;
}