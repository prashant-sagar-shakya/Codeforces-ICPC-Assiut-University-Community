#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define MOD1 998244353
#define INF 1e18
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define sz(x) (int)(x.size())

void Solve()
{
    float x;
    long double p;
    cin >> x >> p;
    // Logic: y - y * x / 100 = P We've to find Y;
    // y(1 - x / 100 ) = P
    // y((100 - x) / 100) = P
    // y = P * 100/(100 - x)
    long double res = p * 100 / (100 - x);
    cout << fixed << setprecision(2);
    cout << res << endl;
}

int main()
{
    fastio();
    // int test_cases;
    // cin >> test_cases;
    // while (test_cases--)
    // {
        Solve();
    // }
    return 0;
}