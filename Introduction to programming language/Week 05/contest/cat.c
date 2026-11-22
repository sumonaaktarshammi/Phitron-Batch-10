#include <stdio.h>
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i];
    }
    int need= n*k - sum;
    

    if(need <=0)
    {
        printf("0");
    }

    else if (need>m)
    {
        printf("-1");

    }
    else
    {
        printf("%d", need);
    }

    return 0;
}