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

ll LinearSearch(ll *arr, ll n, ll target)
{
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
}

void Solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll Min = *min_element(arr, arr + n);
    ll Max = *max_element(arr, arr + n);
    ll i1 = LinearSearch(arr, n, Min);
    ll i2 = LinearSearch(arr, n, Max);
    swap(arr[i1], arr[i2]);
    for (auto i : arr)
        cout << i << " ";
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