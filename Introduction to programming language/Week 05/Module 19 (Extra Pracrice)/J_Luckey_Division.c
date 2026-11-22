
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int found = 0;

    for(int i = 1; i <= n; i++)
    {
        int j=i;
        int lucky = 1;

        while(j > 0)
        {
            int digit = j % 10;

            if(digit != 4 && digit != 7)
            {
                lucky = 0;
                break;
            }

            j = j / 10;
        }

        if(lucky == 1 && n % i == 0)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
