#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const int mod = 1000000007;
const ll INF = 1e9;
vector<int> adj[500001];
ll dfs(ll v)
{
    // cout<<"D";
    vector<ll> partial;
    for (auto i : adj[v])
    {
        // if (i == p)
            // continue;
        partial.push_back(dfs(i));
    }
    sort(partial.rbegin(), partial.rend());
    ll ans = 1, x = 1;
    for (auto i : partial)
        ans += i * (x++);
    return ans;
}
void solve()
{
    ll n, x;
    // cout<<"test1"<<endl;
    cin >> n >> x;
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    ll sum = (dfs(1)) % mod;
    sum = (sum * x) % mod;
    cout << sum << '\n';
    for (int i = 1; i <= n; i++) adj[i].clear();
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
        // cout << "Case #" << t << ": ";
        solve();
    }
}