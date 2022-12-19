#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define md 998244353
#define INF INT_MAX
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll, ll>
#define mi map<int, int>
#define m(a, b) map<a, b>
#define rep(i, s, n) for (int i = s; i < n; i++)
#define mxn 100005
#define printfloat(y) cout << fixed << setprecision(9) << y << endl;
#define YesNo(f)               \
    if (f)                     \
    {                          \
        cout << "YES" << endl; \
    }                          \
    else                       \
    {                          \
        cout << "NO" << endl;  \
    }
#define setval(a, val) memset(a, val, sizeof(a))
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define new1(n) \
    int n;      \
    cin >> n;
#define new2(n, k) \
    int n, k;      \
    cin >> n >> k;
#define new3(a, b, c) \
    int a, b, c;      \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    int a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    int arr[n];     \
    rep(i, n) cin >> arr[i];
void run(vector<unordered_set<int>> g)
{
    int n = g.size();
    for (int i = 1; i <= n; i++)
    {
        if (g[i].size()>0 && g[i].find(-1) == g[i].end())
        {
            int a = 0;
            for (auto x : g[i])
            {
                if (x > i)
                    a++;
            }
            if (a != 0 && a == g[i].size())
            {
                for (auto x : g[i])
                {
                    g[x].erase(i);
                }
                g[i].insert(-1);
            }
        }
    }
}
void solve()
{
    // code here
    int m, n;
    cin >> n >> m;
    vector<unordered_set<int>> g(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }
    int q;
    cin >> q;

    run(g);
    for (int i = 0; i < q; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int u, v;
            cin >> u >> v;
            g[u].insert(v);
            g[v].insert(u);
            run(g);
        }
        if (c == 2)
        {
            int u, v;
            cin >> u >> v;
            g[u].erase(v);
            g[v].erase(u);
            run(g);
        }
        if (c == 3)
        {
            int ans = 0;
            for (int i = 1; i <= n; i++)
            {
                if (g[i].find(-1) == g[i].end())
                    ans++;
            }
            cout << ans << " p " << endl;
        }
    }
}
int main()
{
    // fastIO;
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}
