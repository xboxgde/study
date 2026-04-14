#include <stdio.h>

void double_it(int* ptr)
{
    *ptr *= 2;

}

int main()
{
    int n = 7;
    double_it(&n);
    printf("%d\n", n);  // 14
}