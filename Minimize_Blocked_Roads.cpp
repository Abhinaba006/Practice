#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define mp make_pair
#define F first
#define int long long
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
    rep(i, 0, n) cin >> arr[i];
int countChild(vector<vector<pair<int, int>>> &g, int u, int par, int blocked, vi &subtree)
{
    int cnt = 1;
    for(auto v:g[u])
    {
        if(v.F==par) continue;
        int r = countChild(g, v.F, u, (blocked || v.S), subtree);
        cnt += r;
        if(v.S && !blocked)
        {
            subtree.pb(r);
        }
    }
    return cnt;
}

void solve()
{
    // code here
    new2(n, k);
    vector<vector<pair<int, int>>> g(n);
    rep(i, 0, n - 1)
    {
        new3(u, v, t);
        u--;
        v--;
        g[u].pb({v, t});
        g[v].pb({u, t});
    }
    if(n<=k){
        cout<<0<<endl;
        return;
    }
    vi subtree;
    countChild(g, 0, -1, false, subtree);
    sort(subtree.rbegin(), subtree.rend());
    int ans = 0;
    rep(i, 0, subtree.size()){
        n-=subtree[i]; ans++;
        if(n<=k) break;
    }
    if(n<=k){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
int32_t main()
{
    fastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
