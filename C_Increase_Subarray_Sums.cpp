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
long long maxSubarraySum(int arr[], int n){
    int ans=INT_MIN, temp=0;
    for(int i=0;i<n;i++){
        temp+=arr[i];
        if(arr[i]>temp) temp=arr[i];
        ans = max(ans, temp);
    }
    return ans;
}

void solve(){
    new2(n, x);
    Arr(a, n);
    vector<ll> mx(n+1, INT_MIN), ans(n+1, 0);
    mx[0]=0;
    for(int l=0;l<n;l++){
        ll s=0;
        for(int r=l;r<n;r++){
            s+=a[r];
            mx[r-l+1] = max(mx[r-l+1], s);
        }
    }
    for(int k=0;k<n+1;k++){
        for(int i=0;i<n+1;i++){
            ans[k] = max(ans[k], mx[i]+min(k, i)*x);
        }
    }
    for(int i=0;i<n+1;i++) cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
