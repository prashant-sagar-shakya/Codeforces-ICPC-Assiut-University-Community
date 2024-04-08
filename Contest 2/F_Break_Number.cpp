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

ll count(ll n)
{
    ll cnt = 0;
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            cnt++;
            n /= 2;
        }
        else
            return cnt;
    }
    return cnt;
}

void Solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr[i] = count(a);
    }
    ll max = *max_element(arr, arr + n);
    cout << max << endl;
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