#include<stdio.h>
long long int summation = 0;

void sum(int i, int n, long long int a[])
{
    if(i == n )
    {
        return ;
    }
    summation += a[i];
    sum(i+1,n,a); 
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
   
   sum(0,n,a);

   printf("%lld", summation);


    return 0;
}