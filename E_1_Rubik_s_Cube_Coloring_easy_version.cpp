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
#define Arr(arr, n) int arr[n]; rep(i, 0, n)  cin>>arr[i];
ll power(ll a,ll b){
    if(b == 0){
        return 1;
    }
    ll ans = power(a,b/2);
    ans *= ans;
    ans %= mod;
    if(b % 2){
        ans *= a;
    }
    return ans % mod;
}
ll pp(long long x, ll y)
{
    ll p=mod;
    ll res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
void solve(){
    // code here
        new1(n);
    ll ans = (1LL<<n)-2;
    cout<<4<<" "<<ans<<endl;
    ll f = power(4, ans)%mod;
    f = (f*6)%mod;
    cout<<f<<endl;
    cout<<4<<" "<<ans<<endl;
    f = pp(4, ans)%mod;
    f = (f*6)%mod;
    cout<<f<<endl;
    // for(int i=10;i<=100;i++){
    //     if(pp(4, i)==power(4, i)){
    //         cout<<i<<endl;
    //         // return;
    //     }
    // }

    
}
int main()
{
    fastIO;int t=1;
    // cin>>t;
    // pre();
    while(t--)  solve();
    return 0;
}
