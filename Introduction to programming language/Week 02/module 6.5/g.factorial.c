#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 1; i<=t; i++)
    {
        scanf("%d", &n);
        long long int fact = 1;
        for (int j = 1; j <= n; j++)
        {
            fact = fact*j;
        }
        printf("%lld\n", fact);
    }

    return 0;
}