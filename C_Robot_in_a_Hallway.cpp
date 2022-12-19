#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
// #define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define md 998244353 
#define INF INT_MAX
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll,ll>
#define mi map<int,int>
#define m(a,b) map<a,b>
#define rep(i, s, n) for(int i=s;i<n;i++)
#define mxn 100005
#define printfloat(y) cout<<fixed<<setprecision(9)<<y<<endl;
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define new1(n) int n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) int arr[n]; rep(i, 0, n)  cin>>arr[i];
int xp[] = {0, 0, -1, 1};
int yp[] = {1, -1, 0, 0};
unordered_map<string, int> mp;
int dfs(int i, int j, int t,const vector<vi> &grid, vector<vi> &vis, int p){
    // cout<<i<<" "<<j<<" "<<t<<endl;
    int n=grid[0].size();
    int f=1;
    if(p==0){
        for(auto v:vis) for(auto x:v) if(x==0) f=0;
        if(f) return t;
        return INT_MAX;
    }
    int sd = accumulate(vis[0].begin(), vis[0].end(), 0)+accumulate(vis[1].begin(), vis[1].end(), 0);
    string key = to_string(i)+","+to_string(j)+","+to_string(t)+","+to_string(p)+","+to_string(sd);
    if(mp.find(key)!=mp.end()) return mp[key];
    int ans=INT_MAX;
    rep(k, 0, 4){
        int ni = i+xp[k];
        int nj = j+yp[k];
        if(ni<0 || nj<0 || ni>=2 || nj>=n || vis[ni][nj]) continue;
        vis[ni][nj] = 1;
        int sub = dfs(ni, nj, t+max(0, grid[ni][nj]-t)+1, grid, vis, p-1);
        if(sub==INT_MAX){
            vis[ni][nj] = 0;
            continue;
        }
        ans = min(ans, sub);
        vis[ni][nj] = 0;
    }
    return mp[key] = ans;
}
void solve(){
    new1(n);
    vector<vi> grid(2, vi(n)), vis(2, vi(n, 0));
    rep(i, 0, 2){
        rep(j, 0, n) cin>>grid[i][j];
    }
    vis[0][0] = 1;
    cout<<dfs(0, 0, 0, grid, vis, 2*n-1)<<endl;

}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  {
        mp.clear();
      solve();
    }
    return 0;
}