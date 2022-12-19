#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> f(n+1, INT_MAX);
    vector<int> c(m+1, INT_MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    int i, j;
    i = 0;
    j = 0;
    int ans = 0;
    while (i < n && j < m)
    {
        // cout<<"main while loop"<<endl;
        // cout<<c[j]<<" "<<f[i]<<endl;
        if (c[j] < f[i])
        {
            ans++;
            while (c[j] < f[i] && j<m)
            {
                j++;
                // cout<<j<<endl;
            }
        }
        else
        {
            ans++;
            while (c[j] > f[i] && i < n)
            {
                i++;
                // cout<<i<<endl;
            }
        }
    }
    if(c[0]<f[0])
        ans++;
    cout << ans <<endl;
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