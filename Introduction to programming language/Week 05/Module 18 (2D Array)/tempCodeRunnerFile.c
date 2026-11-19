#include <stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int total_val = r*c;
    int zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            if(a[i][j]== 0)
            {
                 zero++;

            }
           
        }
    }

    bool is_diagonal = true;

    if(r == c)
    {
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            if(i+j == r - 1)
            {
                //we are now at diagonal
            }
            else 
            {
                if(a[i][j] != 0)
                {
                    is_diagonal = false;
                    printf("This is not a sec diagonal matrix\n");
                    
                }
            }
           
        }
    }