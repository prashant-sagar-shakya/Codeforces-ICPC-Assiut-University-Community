#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_set>
#include <cmath>
#include <numeric>
#include <string>
#include <iterator>
#include <set>
#include <unordered_map>
#include <map>
#include <queue>
#include <cstring>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <functional>
#include <bitset>
#include <climits>
#include <assert.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define MOD1 998244353
#define INF 1e18
#define MOD 1000000007
#define endl "\n"
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
    int a, b, c;
    cin >> a >> b >> c;

    int p = a, q = b, r = c;

    if (p > q)
        swap(p, q);
    if (q > r)
        swap(q, r);
    if (p > q)
        swap(p, q);

    cout << p << endl
         << q << endl
         << r << endl;

    cout << endl;

    cout << a << "\n"
         << b << "\n"
         << c << "\n";
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