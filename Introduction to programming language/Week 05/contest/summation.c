#include <stdio.h>
int main()
{
    int r, k, s, n;
    scanf("%d %d %d %d", &r, &k, &s, &n);

    if (r > k && r > s && r > n)
    {
        printf("Rahim");
    }
    else if (k > r && k > s && k > n)
    {
         printf("Karim");
    }
    else if (s > r && s > k && s > n)
    {
        printf("Sakib");
    }
    else if (n > r && n > k && n > s)
    {
        printf("Nabil");
    }
    else if( r == k || r == s || r == n || k == s || k== n || s == n  )
    {
        printf("Tie");


    }



    
    return 0;
}