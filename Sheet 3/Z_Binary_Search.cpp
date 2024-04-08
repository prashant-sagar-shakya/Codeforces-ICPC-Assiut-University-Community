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

bool Binary_search(ll *arr, ll n, ll target)
{
    ll start = 0, end = n - 1;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

void Solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 1; i <= q; i++)
    {
        ll val;
        cin >> val;
        if (Binary_search(arr, n, val))
            cout << "found\n";
        else
            cout << "not found\n";
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