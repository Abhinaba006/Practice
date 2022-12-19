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
int prefixSum[mxn];
int xorString(string &s, int start, int end){
    if(start==0) return prefixSum[end]%2==0;
    return (prefixSum[end]-prefixSum[start-1])%2==0;
}
bool rec(string &s, int start, int n, int k, int x){
    if(k==0 && start==n-k) {
        return true;
    }
    if(start>n-k+1) return false;
    int ans = false;
    for(int i=start;i<n;i++){
        int xOr = xorString(s, start, i);
        if(xOr==x){
            ans = rec(s, i+1, n, k-1, x);
            if(ans) return true;
        }
    }
    return ans;
    
}
void solve(){
    // code here
    new2(n, k);
    string s;
    cin>>s;
    // int n = s.length();
    // vi temp(n, 0);
    // for(int i=0;i<n;i++)    if(s[i]-'0'==1) temp[i]=1;
    memset(prefixSum, 0, sizeof(prefixSum));
    prefixSum[0] = s[0]=='1';
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + (s[i]=='1');
    }
    // cout<<"prefix ";
    // for(int i=0;i<n;i++) cout<<prefixSum[i]<<" ";
    // cout<<endl;
    YesNo(rec(s, 0, n, k, 0) || rec(s, 0, n, k, 1));
    // cout<<xorString(s, 0, n-1)<<" "<<xo(s, 0, n-1)<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
