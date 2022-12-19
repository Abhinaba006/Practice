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
void solve(){
    // code here
    new1(n);
    int a[n], odd=0, even=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2) odd++;
        else even++;
    }
    if(abs(odd-even)>1){
        cout<<-1<<endl;
        return;
    }
    ll ans=0;
    if(odd>even && a[0]%2==0){
        int i=1;
        while(i<n && a[i]%2==0) i++;
        ans=i-1;
        swap(a[i], a[0]);
    } else if(odd<even && a[0]%2){
        int i=1;
        while(i<n && a[i]%2) i++;
        ans=i-1;
        swap(a[i], a[0]);
    }
    int j=1;
    for(int i=1;i<n;i+=2){
        j=i;
        if(a[i-1]%2==a[j]%2){
            j = i;
            while(j<n && a[j]%2==a[i-1]%2){
                j++;
            }
            if(j<n){
                swap(a[i], a[j]);
                ans+=(j-i);
            }
        }
    }
    cout<<ans<<endl;
    // rep(i, 0, n) cout<<a[i]<<" ";
    // cout<<endl;

}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
