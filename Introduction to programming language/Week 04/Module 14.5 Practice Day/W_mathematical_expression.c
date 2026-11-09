#include <stdio.h>
int main()
{
    int a, b, c;
    char s, equ;
    scanf("%d %c %d %c %d", &a, &s, &b, &equ, &c);
    int val;

    if (s == '+')
    {
        val = a + b;
    }
    else if (s == '-')
    {
        val = a - b;
    }
    else if (s == '*')
    {
        val = a * b;
    }

    if(val == c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("%d", val);
    }

    return 0;
}