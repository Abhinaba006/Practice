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
bool chl(string s, int p, string t, int q){
    int n=s.length(), m=t.length(), j=q, i=p;
    while(i>=0 && j>=0 && s[i]==t[j]){
        i--;
        j++;
    }
    return j==m;

}
bool chr(string s, int p, string t){
    int n=s.length(), m=t.length(), j=0, i=p;
    int ans=0;
    while(j<m && i<n && s[i]==t[j]){
        if(i>0 && s[i-1]==t[j+1]) ans |= chl(s, i-1, t, j+1);
        if(ans) return true;
        j++;
        i++;
    }
    return j==m;
}
void solve(){
    string s, t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i]==t[0] && chr(s, i, t)){
            cout<<"YES"<<endl;
            return;
        } 
    }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  {
      solve();
    }
    return 0;
}
