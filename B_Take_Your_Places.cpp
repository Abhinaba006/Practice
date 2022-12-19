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
ll s(ll ar[], int n, int l){
    vi a(ar, ar+n);
    int j=0, i=0, odd=0, even=0;
    ll ans=0;
    while(i<n){
        j=i;
        while(j<n && a[j]!=l)    j++;
        if(l){
            odd = max(odd, i);
            while(odd<n && a[odd]!=1)    odd++;
            j=odd;
        }else{
            even=max(even, i);
            while(even<n && a[even]!=0)    even++;
            j=even;
        }
         
        l = 1-l;
        swap(a[i], a[j]);
        ans += j-i;
        i++;
    }
    return ans;
}
void solve(){
    // code here
    new1(n);
    ll a[n], odd=0, even=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]%=2;
        if(a[i]) odd++;
        else even++;
    }
    if(abs(odd-even)>1){
        cout<<-1<<endl;
        return;
    }
    ll ans;
    if(odd>even) ans = s(a, n, 1);
    else if(even>odd) ans = s(a, n, 0);
    else ans = min(s(a, n, 0), s(a, n, 1));
    

    cout<<ans<<endl;

}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}