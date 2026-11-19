#include<stdio.h>

int add(int a,int b)
{
    int add = a+b;
    return add;
   
}
int main()    
{
   int x,y;
   scanf("%d %d", &x, &y);
   int sum = add(x,y);
   printf("%d\n", sum);
    return 0;
}