#include<bits/stdc++.h>
#include<conio.h>
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
void p(vi a){
    for(int x:a) cout<<x<<" ";
    cout<<endl;
}
int help(vi ans, vi ref){
    int a=0;
    for(int i=1;i<ref.size();i++){
        int j = i;
        int t=ans[i];
        if(ans[i]==ref[i]) continue;
        a++;
        int n = ref.size();
        while(n--){
            swap(t, ans[ref[i]]);
            i = ref[i];
        }
        ans[i]=t;
        i = j;
    }
    return a;
}
void solve(){
    new1(n);
    n++;
    vi a(n, 0), b(n, 0);
    rep(i, 1, n){
        cin>>a[i];
        b[i]=i;
    }
    cout<<help(b, a);
}
int main()
{
    fastIO;int t=1;
    while(t--)  {
      solve();
    }
    return 0;
}
