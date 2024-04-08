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
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll res[n * n], k = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            res[k] = arr[i] + arr[j] + j - i;
            // cout << res[k] << " ";
            k++;
        }
    }
    // Finding Min Element
    ll min = res[0];
    for (ll i = 0; i < k; i++)
    {
        if (res[i] < min)
            min = res[i];
    }
    cout << min << endl;
}

int main()
{
    fastio();
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        Solve();
    }
    return 0;
}