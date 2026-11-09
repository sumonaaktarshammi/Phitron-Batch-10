#include <stdio.h>
void mini_max(int n, int a[])

{
    int mini = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini)
        {
            mini = a[i];
        }
    }

    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d ", mini);
    printf("%d ", max);
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
    mini_max(n, a);
    return 0;
}