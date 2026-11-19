#include <stdio.h>
long long total = 0;
void sum(int i, int n, int a[])
{
    if (i == n)
    {
        return;
    }
    total += a[i];
    sum(i + 1, n, a);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sum(0, n, a);
    printf("%lld\n", total);

    return 0;
}