#include <bits/stdc++.h>

using namespace std;
int res[1000001];

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
    ll num, sum, result = 0;
    vector<ll> vec;
    cin >> num >> sum;
    if (num >= sum)
    {
        if (((sum * (sum + 1) / 2) < num))
            cout << -1;
        else
            for (ll i = sum - 1; i >= 1; i--)
            {
                if (result + i <= sum)
                {
                    vec.push_back(i);
                    result += i;
                }
                if (result == sum)
                    break;
            }
        if (result == sum)
            for (ll i = 0; i < vec.size(); i++)
                cout << vec[i] << " ";
    }
    else
    {
        if (((num * (num + 1) / 2) < sum))
            cout << -1;
        else
            for (ll i = num - 1; i >= 1; i--)
            {
                if (result + i <= sum)
                {
                    vec.push_back(i);
                    result += i;
                }
                if (result == sum)
                    break;
            }
        if (result == sum)
            for (ll i = 0; i < vec.size(); i++)
                cout << vec[i] << " ";
    }
    vec.clear();
    result = 0;
    cout << endl;
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
