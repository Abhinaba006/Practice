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
    vector<pi> caves;
    new1(n);
    int low=0, high=0;
    for(int i=0;i<n;i++){
        new1(k);
        int mx = INT_MIN;
        for(int j=0;j<k;j++){
            new1(temp);
            temp -= j;
            mx = max(mx, temp);
        }
        high = max(mx, high)+1;
        caves.pb({mx, k});
    }
    // for(auto c:caves){
    //     cout<<c.F<<" "<<c.S<<endl;
    // }
    sort(caves.begin(), caves.end());
    int ans=low;
    // cout<<"high "<<high<<" low "<<low<<endl;
    while(low<=high){
        int mid = (high+low)/2;
        bool can = true;
        int pow = mid;
        for(auto cave:caves){
            if(pow<=cave.F){
                can = false;
                break;
            }
            pow += cave.S;
        }
        if(can){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
