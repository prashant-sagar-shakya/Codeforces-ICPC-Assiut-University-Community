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
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define sz(x) (int)(x.size())

void Solve()
{
    long long a, b, k;
    cin >> a >> b >> k;
    if(a % k == 0 && b % k == 0)
        cout << "Both" << endl;
    else if (a % k == 0 && b % k != 0)
        cout << "Memo" << endl;
    else if (a % k != 0 && b % k == 0)
        cout << "Momo" << endl;
    else
        cout << "No One" << endl;
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