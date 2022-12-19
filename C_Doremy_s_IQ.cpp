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
string ans(mxn, '0');
bool check(int mid, int a[], int n, int q){
    for(int i=0;i<n;i++) ans[i]='0';
    for(int i=0;i<mid;i++) ans[i]=((a[i]<=q)+'0');
    for(int i=mid;i<n;i++){
        ans[i]='1';
        if(q==0) return 0;
        if(a[i]>q) q--;
    }
    return q>=0;
}
void solve(){
    // code here
    new2(n, k);
    Arr(a, n);
    int h=n-1, l=0, mid=h;
    while(l<=h){
        mid = (h+l)>>1;
        if(check(mid, a, n, k)){
            h = mid-1;
        }else l = mid+1;
    }
    check(h+1, a, n, k);
    rep(i, 0, n) cout<<ans[i];
    cout<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
