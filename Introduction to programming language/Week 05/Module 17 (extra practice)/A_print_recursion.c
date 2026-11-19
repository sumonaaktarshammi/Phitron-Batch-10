#include<stdio.h>
void print_re(int n)
{
    if(n == 0)
    {
        return ;
    }
    printf("I love Recursion\n");
    print_re(n-1);
}
int main()
{
   int n;
   scanf("%d", &n);
   print_re(n);
    return 0;
}