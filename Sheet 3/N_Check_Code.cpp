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
    int a, b;
    bool res = false;
    string s;
    cin >> a >> b >> s;
    if (a + b + 1 == sz(s))
    {
        if (s[a] == '-')
        {
            for (ll i = a + 1; i <= a + b; i++)
            {
                if (int(s[i]) >= 48 && int(s[i]) <= 57)
                    res = true;
                else
                {
                    res = false;
                    break;
                }
            }
            if (res == true)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "No\n";
    }
    else
        cout << "No" << endl;
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