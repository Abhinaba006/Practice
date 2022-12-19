#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
int po(long long x, unsigned int y)
{
    int ans = 1;    
 
    x = x % MOD; 
  
    if (x == 0) return 0; 
    while (y > 0)
    {

        if (y & 1)
            ans = (ans*x) % MOD;
        y = y>>1; 
        x = (x*x) % MOD;
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    n = po(2, n-1) + 1;
    cout << n / 2 << endl;
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