//setprecision holo doshomik er por koy ghor print korte cacchi
#include<iostream>
#include<iomanip> // input output manipulation ,setprecision er header file
using namespace std;

int main()
{
    double d = 12.4567;
    cout << fixed << setprecision(1) << d << endl;
    return 0; 
}
