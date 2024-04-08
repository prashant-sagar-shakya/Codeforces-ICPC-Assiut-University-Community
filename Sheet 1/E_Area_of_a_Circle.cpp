#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.141592653;
    double r;
    cin >> r;
    double res = pi * r * r;
    cout << fixed << setprecision(9);
    cout << res << endl;
}