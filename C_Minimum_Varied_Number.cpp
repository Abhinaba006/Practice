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
int rec(int target, int curr, int used[]){
    // cout<<target<<" "<<curr<<endl;
    if(target==0) return curr;
    if(target<0) return INT_MAX;
    int ans=INT_MAX;
    for(int i=9;i>=1;i--){
        if(used[i]) continue;
        used[i]=1;
        int sub = rec(target-i, curr*10+i, used);
        used[i]=0;
        if(sub!=INT_MAX) return sub;
    }
    return ans;

}
int r(int n){
    int ans=0;
    while(n){
        ans = ans*10 + n%10;
        n/=10;
    }
    return ans;
}
void solve(){
    // code here
    new1(n);
    int used[11]={0};
    int ans=rec(n, 0, used);
    cout<<min(ans, r(ans))<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
