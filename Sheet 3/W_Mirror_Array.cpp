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
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> arr[i][j];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = m - 1; j >= 0; j--)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
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