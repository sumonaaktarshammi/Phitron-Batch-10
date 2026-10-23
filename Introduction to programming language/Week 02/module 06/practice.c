#include<stdio.h>
int main()
{
   int x = 10;
   int y = x++;
   int z = ++y;
   printf("%d", z++); //age z er man print hobe then z++ 
    return 0;
}