#include<bits/stdc++.h>
using namespace std;
int* fun(int n)
{
    int* a = new int[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int* p =fun(n);
    for(int i = n-1; i>=0; i--)
    {
        cout << p[i] << " ";
    }

    
    return 0;
}    
