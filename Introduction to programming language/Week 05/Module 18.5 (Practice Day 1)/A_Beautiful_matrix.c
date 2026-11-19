#include <stdio.h>
int main()
{
    int a[5][5];
    int row, col;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j] == 1)
            {
                row = i + 1; // array index shuru hoy o theke bt ei prblm e row and col start hoyeche 1 theke 
                col = j + 1;
            }
        }
    }
    int ans = abs(row - 3) + abs (col - 3);
    printf("%d\n", ans);

    return 0;
}