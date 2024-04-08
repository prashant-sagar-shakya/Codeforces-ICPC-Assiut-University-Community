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

bool all_even(ll *arr, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] & 1)
            return false;
    }
    return true;
}

void Solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll cnt = 0;
    while (all_even(arr, n))
    {
        cnt++;
        for (int i = 0; i < n; i++)
            arr[i] = arr[i] / 2;
    }
    cout << cnt << endl;
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