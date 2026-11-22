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

    int mx = a[0];
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n ; j++)
        {
            if(a[j]>mx)
            {
              mx = a[j];
    
            }

        }
    }
    printf("%d\n", mx);
   
    return 0;
}