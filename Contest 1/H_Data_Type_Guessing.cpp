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
#define ll long long
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define sz(x) (int)(x.size())

void Solve()
{
    double n, k, a;
    cin >> n >> k >> a;
    long long x = (k * n) / a;
    double q = (k * n) / a, test = q - x;
    if (test > 0)
        cout << "double\n";
    else if (q > 2147483647)
        cout << "long long\n";
    else
        cout << "int\n";
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