#include<stdio.h>
int main()
{
    long long int a;
    int b;

    scanf("%lld %d", &a, &b);
    long long int multiply = a*b;
    printf("%lld", multiply);

    return 0;
}