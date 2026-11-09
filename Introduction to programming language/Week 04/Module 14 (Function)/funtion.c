#include<stdio.h>
int doublr_it(int num)
{
    num *= 2;
    return num;
}
int main()
{
    int x = 10;
    int dbl = double_it(x);
    printf("%d", dbl);
    return 0;
}

