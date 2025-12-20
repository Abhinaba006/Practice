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
void f(vector<vector<char>> &v, int k, int x, int y, int n){
    if(min(x, y)<0 || max(x, y)>=n) return;
    if(v[x][y]=='X') return;
    v[x][y]='X';
    f(v, k, x+k, y, n);
    f(v, k, x-k, y, n);
    f(v, k, x, y+k, n);
    f(v, k, x, y-k, n);
}
void s(vector<vector<char>> &v){
    for(auto c:v){
        for(auto x:c) cout<<x;
        cout<<endl;
    }
}
void solve(){
    new4(n, k, c, r);
    vector<vector<char>> v(n, vector<char>(n, '.'));
    c--;
    r--;
    v[c][r]='X';
    for(int i=(c+1)%n, j=(r==0?n-1:r-1);i!=c;i=(i+1)%n){
        f(v, k, i, j, n);
        j=(j==0?n-1:j-1);
    }
    s(v);
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
