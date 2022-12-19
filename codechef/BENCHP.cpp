#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ar array
#define ll long long    
using namespace std;
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void fastscan(int &number)
{
    bool negative = false;
    register int c;
    number = 0;

    c = getchar();
    if (c == '-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;
    if (negative)
        number *= -1;
}
void solve()
{
    ll n, w, wr;
    scanf("%ll%ll%ll", &n, &w, &wr);
    ll w_ar[n];
    unordered_map<ll, ll> hash;
    for (ll i = 0; i < n; i++)
    {
        scanf("%ll", &w_ar[i]);
        hash[w_ar[i]]++;
    }

    if (wr >= w)
    {
        cout << "YES\n";
        return;
    }
    w -= wr;

    for (auto ele : hash)
    {
        w -= ele.first * (ele.second - ele.second % 2);
    }
    if (w <= 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}