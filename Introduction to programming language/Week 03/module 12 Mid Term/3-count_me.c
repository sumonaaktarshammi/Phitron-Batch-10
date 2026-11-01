#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    
    for (int i = 0; i < t; i++)
    {
        char s[10005];
        scanf("%s", s);

        int c_count = 0;
        int s_count = 0;
        int d_count = 0;


        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                c_count++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                s_count++;
            }
            else if (s[j] >= '0' && s[j] <= '9')
            {
                d_count++;
            }
        }
        printf("%d %d %d\n", c_count, s_count, d_count);

    }
    

    return 0;
}