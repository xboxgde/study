#include <stdio.h>
int main()
{
    int n = 5;
    printf("하위4비트: %d\n", n & 0xF);
    printf("가나다 %d\n", n | 8);
    printf("123. %d\n", n ^ 2);
    
}