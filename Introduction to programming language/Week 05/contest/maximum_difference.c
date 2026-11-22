#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    
    int sub = 0;
    int count = 0;
    
    
    
    int i = 0;
    int j = n-1;
    while(j>i)
    {
        sub = a[j] - a[i];
        count ++;

        printf("%d", count);
    }
    i++;
    j--;

    return 0;
}