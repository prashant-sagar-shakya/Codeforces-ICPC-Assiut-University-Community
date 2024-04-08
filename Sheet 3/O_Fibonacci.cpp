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

ll fib(int n)
{
    ll n1 = 0, n2 = 1, nt = 0;
    if (n == 1)
        return nt;
    for (ll i = 2; i <= n; i++)
    {
        n1 = n2;
        n2 = nt;
        nt = n1 + n2;
    }
    return nt;
}

void Solve()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
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