#include<stdio.h>
long long int  maximum;

void find_max(int i, int n, long long int a[])
{
    if(i == n )
    {
        return ;
    }
    
   
    if(a[i]>maximum)
    {
        maximum = a[i];

    }
    find_max(i+1,n,a);
}

    
int main()
{
   int n;
   scanf("%d", &n);
   long long int a[n];
   for(int i = 0 ; i<n ; i++)
   {
    scanf("%lld", &a[i]);
   }
   maximum = a[0];
   find_max(0,n,a);

   printf("%lld", maximum);


    return 0;
}