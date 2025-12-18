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
#define mxn 200005
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
    ll n, k;      \
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
bool isBipartite(vector<vector<ll>>& graph) {
        vector<ll> color(graph.size(), 0);
        for(int i=0;i<graph.size();i++){
            if(color[i])   continue;
            color[i] = 1;
            queue<int> q; 
            q.push(i);
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                for(auto neighbour:graph[curr]){
                    if (color[neighbour]==color[curr] )   return false;
                    if(!color[neighbour]){
                        color[neighbour] = -color[curr];
                        q.push(neighbour);
                    }
                }
            }
        }
        return true;
    }
void solve()
{
    // code here
    int f = 1;
    new1(p);
    vector <vector<ll>> adj(p);
    while(p--){
        new2(u, v);
        u--;
        v--;        
        adj[u].pb(v);
        adj[v].pb(u);
        if(adj[v].size()>2 || adj[u].size()>2 || u==v) f=0;
    }
    YesNo(f && isBipartite(adj));
}
int main()
{
    fastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
