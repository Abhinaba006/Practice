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
#define rep(i, s, n) for(int i=s;i<n;i++)
#define mxn 100005
#define printfloat(y) cout<<fixed<<setprecision(9)<<y<<endl;
#define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define setval(a,val) memset(a,val,sizeof(a)) 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define new1(n) ll n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) ll arr[n]; rep(i, 0, n)  cin>>arr[i];
void solve(){
    // code here
    new1(n);
    Arr(a, n);
    if(n%2){
        ll ans=0;
        for(int i=1;i<n-1;i+=2){
            if(max(a[i-1], a[i+1])>=a[i]) ans += max(a[i-1], a[i+1])-a[i]+1;
        }
        cout<<ans<<endl;
        return;
    }
    ll pre[n]={0}, post[n]={0};
    for(int i=1;i<n;i+=2){
        if(i<n-1){
            if(max(a[i-1], a[i+1])>=a[i]) pre[i] += max(a[i-1], a[i+1])-a[i]+1;
        }else if(a[i-1]>=a[i]) pre[i]=a[i-1]-a[i]+1;
    }
    post[0] = max(0LL, a[1]-a[0]);
    for(int i=2;i<n;i+=2) if(max(a[i-1], a[i+1])>=a[i]) post[i] += max(a[i-1], a[i+1])-a[i]+1;
    rep(i, 1, n) pre[i]+=pre[i-1];
    for(int i=n-2;i>=0;i--) post[i]+=post[i+1];
    // cout<<"pre"<<endl;
    // rep(i, 0, n) cout<<pre[i]<<" ";
    // cout<<endl;
    // cout<<"post"<<endl;
    // rep(i, 0, n) cout<<post[i]<<" ";
    // cout<<endl;
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i+=2){
        ll t=0;
        if(i-1>=0) t+=pre[i-1];
        if(i+2<n) t+=post[i+2];
        ans = min(ans, t);
    }
    cout<<ans<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
