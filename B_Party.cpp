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
#define new1(n) int n;cin >> n;
#define new2(n, k) int n, k;cin >> n >> k;
#define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
#define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
#define Arr(arr, n) int arr[n]; rep(i, 0, n)  cin>>arr[i];
int help(vector<pi> a, int n, int k, vector<pi> p, int p1=0){
    int s=0;
    int ans2=INT_MAX;
    for(auto ps:p) if(ps.F!=-1) s++;
    if(s%2==0) return 0;
    if(p1+1<=n-1) ans2 = help(a, n, k, p, p1+1);
    int ans=0;
    int pos = a[p1].S;
    ans += a[p1].F;
    int t=0;
    for(int i=0;i<p.size();i++){
        if(p[i].F==pos || p[i].S==pos){
            p[i].S=p[i].F=-1;
        }
        t+=p[i].F!=-1;
    }
    if(p1+1<=n-1) {
        int tq = help(a, n, k, p, p1+1);
        if(tq==INT_MAX) return tq;
        else ans+=tq;
    }
    if(ans2==0){
        if(t%2==0) return ans;
        return INF;
    }
    if(ans2==1 && ans==2) cout<<"p "<<t<<endl;
    return min(ans, ans2);
}
void solve(){
    // code here
    new2(n, k);
    Arr(arr, n);
    int a[mxn]={0}, b[mxn]={0}, degree[mxn]={0};
    rep(i, 1, k+1){
        cin>>a[i]; cin>>b[i];
        degree[a[i]]++; degree[b[i]]++;
    }
    int ans=INT_MAX;
    if(k%2==0) ans=0;
    else{
        rep(i, 1, n+1) if(degree[i]%2==1) ans=min(ans, arr[i-1]);
        rep(i, 1, k+1) if(degree[a[i]]%2==0 && degree[b[i]]%2==0) ans = min(ans, arr[a[i]-1]+arr[b[i]-1]);
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
