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
#define rep(i, n) for (int i = 0; i < n; i++)
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
        continue;              \
    }
#define setval(a, val) memset(a, val, sizeof(a))
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define new1(n) \
    ll int n;   \
    cin >> n;
#define new2(n, k) \
    ll int n, k;   \
    cin >> n >> k;
#define new3(a, b, c) \
    ll int a, b, c;   \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    ll int a, b, c, d;   \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    ll int arr[n];  \
    rep(i, n) cin >> arr[i];
int mdis(vi dist, vector<bool> sptset, int V)
{
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptset[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}
int dijsktra(vector<vector<int>> graph, int n)
{
    vi dist(n, INT_MAX);
    vector<bool> sptset(n, false);
    dist[0] = 0;
    rep(i, n - 1)
    {
        int u = mdis(dist, sptset, n);
        cout << "u is " << u << endl;
        sptset[u] = true;
        rep(j, n)
        {
            if (!sptset[j] && graph[u][j] && dist[u] != INT_MAX && dist[u] + graph[u][j] < dist[j])
            {
                cout << "hi";
                dist[j] = dist[u] + graph[u][j];
            }
            if (graph[u][j] != 0 && dist[u] < dist[j])
                dist[j] -= dist[u];
            rep(i, n) cout << dist[i] << " ";
            cout << endl;
        }
        rep(i, n) cout << dist[i] << " ";
        cout << endl;
    }

    return dist[n - 1];
}
void solve()
{
    // code here
    int m, n;
    cin >> m >> n;
    vector<vector<int>> graph(m, vector<int>(m, 0));
    rep(i, n)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph[x - 1][y - 1] = d;
        // rep(i, m+1)
        // {
        //     rep(j, m+1) cout << graph[i][j] << " ";
        //     cout << endl;
        // }
        // cout<<"\n-----------\n";
    }
    cout << dijsktra(graph, m + 1);
}
int main()
{
    fastIO;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
