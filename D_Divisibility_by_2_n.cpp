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
    ll needed=n;
    rep(i, 0, n){
        while(a[i]%2==0){
            needed--;
            a[i]/=2;
        }
    }
    int supp = n;    
    if(supp%2) supp--;
    vl sp;
    while(supp>1){
        int t = supp, res=0;
        while(t%2==0){
            res++;
            t/=2;
        }
        supp-=2;
        sp.pb(res);
    }
    sort(sp.begin(), sp.end(), greater<ll>());
    // for(auto x:sp) cout<<x<<" ";
    // cout<<endl;
    int ans=0;
    // cout<<needed<<" "<<supp<<endl;
    while(ans<sp.size() && needed>0 ){
        needed-=sp[ans++];
    }
    if(needed<=0) cout<<ans<<endl;
    else cout<<-1<<endl;
    // cout<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
