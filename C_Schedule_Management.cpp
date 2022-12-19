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
// #define m(a,b) map<a,b>
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
bool pos(ll job[], int n, int g){
    ll hand=0;
    for(int i=0;i<n;i++){
        if(job[i]>g) hand += 2*(job[i]-g);
        else if(job[i]<g && hand>0) {
            int can = (g-job[i]);
            can -= can%2;
            hand = max(0LL, hand-can);
        }
    }
    return hand<=0;
}
void solve(){
    // code here
    new2(n, m);
    ll job[n]={0};
    for(int i=0;i<m;i++){
        new1(t);
        t--;
        job[t]++;
    }
    sort(job, job+n, greater<int>());
    ll high=INT_MAX, low=1, ans=high;
    while(low<=high){
        int mid=(high+low)/2;
        if(pos(job, n, mid)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;
    // YesNo(pos(job, n, 4));
}
int main()
{
    fastIO;int t=1;
    cin>>t;
    while(t--)  solve();
    return 0;
}
