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
void solve(){
    new1(n);
    Arr(a, n);
    Arr(b, n);
    map<int, int> hash;
    rep(i, 0, n) hash[a[i]]++;
    rep(i, 0, n) hash[b[i]]--;
    int ans=0;
    for(auto x:hash){
        if(x.S<0 && x.F>9){
            ans+=abs(x.S);
            hash[x.F]=0;
            int t = to_string(x.F).length();
            hash[t]+=x.S;
        }
    }
    for(auto x:hash){
        if(x.S>0 && x.F>9){
            ans+=abs(x.S);
            hash[x.F]=0;
            int t = to_string(x.F).length();
            hash[t]+=x.S;
        }
    }
    vi tm;
    for(auto x:hash) if(x.S==0) tm.pb(x.F);
    for(auto x:tm) hash.erase(x);
    for(auto x:hash){
        if(x.F==1) continue;
        hash[x.F]=0;
        ans+=abs(x.S);
        hash[1]+=x.S;
        // cout<<x.F<<" "<<x.S<<endl;
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
