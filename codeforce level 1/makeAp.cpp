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
#define Arr(arr, n) int arr[n]; rep(i, n)  cin>>arr[i];
bool isAP(int a, int b, int c){
    int arr[] = {a, b, c};
    if(arr[2]-arr[1] == arr[1]-arr[0]) return true;
    return false;
}

isApPossible(int diff, int target){
    
}
void solve(){
    // code here
    new3(a, b, c);
    if(isAP(a, b, c)){
        cout<<"YES"<<endl;
        return;
    }
    // try a
    if((2*b-c)%a==0 && (2*b-c)>0){
        cout<<"YES"<<endl;
        return;
    }
    // try b
    if((a+c)%(2*b)==0 && (a+c)>0){
        cout<<"YES"<<endl;
        return;
    }
    // try c
    if((2*b-a)%c==0 && (2*b-a)>0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
    
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
