#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;

    (c >= '0' && c <= '9')
        ? cout << "IS DIGIT\n"
    : (c >= 'A' && c <= 'Z')
        ? cout << "ALPHA\nIS CAPITAL\n"
        : cout << "ALPHA\nIS SMALL\n";

    return 0;
}