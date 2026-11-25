#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i< n ;i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<n/2 ;i++) // // অ্যারের অর্ধেক পর্যন্ত লুপ চালানো হচ্ছে (জোড়া করে সোয়াপ করার জন্য), cause majher val same indx ei thakbe
    {
        swap(a[i],a[n-1-i]); // শুরু দিকের i-তম উপাদান ও শেষ দিকের (n-1-i)-তম উপাদান অদলবদল হচ্ছে
    }
    for(int i = 0; i<n ;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}