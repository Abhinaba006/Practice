#include<bits/stdc++.h>
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
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll,ll>
#define mi map<int,int>
#define m(a,b) map<a,b>
#define rep(i,n) for(int i=0;i<n;i++)
#define mxn 100005
#define printfloat(y) cout<<fixed<<setprecision(9)<<y<<endl;
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;continue;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define new1(n)ll int n;cin >> n;
#define new2(n, k)ll int n, k;cin >> n >> k;
#define new3(a, b, c)ll int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) ll int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) int arr[n]; rep(i, n){  cin>>arr[i];}
vector< vector<int> > dp(100006, vector<int>(100006, -1) );
ll rec(int a[], int b[], int n, int x, int X, int Y){
    if(n==0)    return 0;
    if (dp[n][x]!=-1)   return dp[n][x];
    int res = 0;
    // if possible give andy
    if(x-1>0)
        res = max(res, a[n-1]+rec(a, b, n-1, x-1, X, Y));
    // if posssible give it another
    if(Y-(n-x))
    return dp[n][x];
}
void solve(){
    // code here
    // memset(dp, -1, sizeof(dp));
    new3(n, x, y);
    Arr(a, n);
    Arr(b, n);
    int ans=0;
    ans = rec(a, b, n, x, x, y);
    cout<<ans;
}
int main()
{
    fastIO;int t=1;
    // cin>>t;
    while(t--)  solve();
    return 0;
}
