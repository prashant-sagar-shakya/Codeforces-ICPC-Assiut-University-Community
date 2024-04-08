#include <bits/stdc++.h>

using namespace std;

bool sieve[1001];
void Seive()
{
    int maxN = 1000;
    sieve[0] = sieve[1] = true;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j <= maxN; j += i)
                sieve[j] = true;
        }
    }
}

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
    Seive();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (!sieve[i])
            cout << i << " ";
    }
    cout << endl;
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