#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long int max,x;//x indx er moto kaj korteche
    for(int i = 0; i<n ; i++)
    {
        cin >> x; // new nmbr input ney and x e joma rakhe

        max = (i==0) ? x : ((x>max) ? x : max);
    }

    cout << max << endl;
    return 0;
    
}


