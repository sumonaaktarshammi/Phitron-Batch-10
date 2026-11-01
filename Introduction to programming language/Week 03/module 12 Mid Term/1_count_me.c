#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int a[n];

    int count_1= 0;
    int count_2= 0;

   for(int i = 0; i<n ; i++)
   {
    scanf("%d", &a[i]);

    if(a[i]%2 == 0 )
    {
      count_1++;
    }
    else if ( a[i]%3 == 0)
    {
      count_2++;
    }
   }
   printf("%d %d", count_1, count_2);
    return 0;
}