#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int x,y;
    for(int i= 1;i<=t; i++)
    {
        scanf("%d %d", &x, &y);
        int sum=0;

        if(x>y)
        {
            int temp=x;
            x=y;
            y=temp;
        }
        for(int j = x+1; j<y; j++)
        {
            if(j %2 != 0)
            {
             sum= sum +j;
            }
            
        }
        printf("%d\n", sum);

      
    }
    return 0;
    
}