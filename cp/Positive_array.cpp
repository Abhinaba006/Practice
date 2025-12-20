#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
// #define mp make_pair
#define F first
#define S second
#define mod 1000000007
#define md 998244353
#define INF INT_MAX
#define vl vector<ll>
#define vi vector<int>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpl vector<pl>
#define vpi vector<pi>
#define ml map<ll, ll>
#define mi map<int, int>
#define m(a, b) map<a, b>
#define rep(i, s, n) for (int i = s; i < n; i++)
#define mxn 100005
#define printfloat(y) cout << fixed << setprecision(9) << y << endl;
#define YesNo(f)               \
    if (f)                     \
    {                          \
        cout << "YES" << endl; \
    }                          \
    else                       \
    {                          \
        cout << "NO" << endl;  \
    }
#define setval(a, val) memset(a, val, sizeof(a))
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define new1(n) \
    int n;      \
    cin >> n;
#define new2(n, k) \
    int n, k;      \
    cin >> n >> k;
#define new3(a, b, c) \
    int a, b, c;      \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    int a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    int arr[n];     \
    rep(i, 0, n) cin >> arr[i];
void p(map<int, int> &m){
    // for(auto x:m) if(x.S==0) m.erase(x.F);
    cout<<"printing"<<endl;
    for(auto x:m) cout<<x.F<<" "<<x.S<<endl;
    cout<<"---"<<endl;
}
void solve()
{
    // code here
    new1(n);
    Arr(a, n);
    // int n=4;
    // int a[] {3, 1, 1, 2};
    map<int, int> mp;
    rep(i, 0, n) mp[a[i]]++;
    int ans = 0;
    int i=1;
    while (mp.size())
    {
        // cout<<mp.size()<<endl;
        i=1;
        ans++;
        for (auto x : mp)
        {
            // cout<<"x "<<x.F<<" i "<<i<<" "<<x.S<<endl;
            if(x.F>=i && x.S>0){
                int diff = min(x.S, x.F-i+1);
                // cout<<x.F<<" diff "<<diff;

                mp[x.F]-=diff;
                // cout<<" left "<<mp[x.F]<<endl;
                i+=diff;
            } 
        }
        vi d;
        for(auto x:mp){
            int f = x.F, s=x.S;
            // cout<<f<<" "<<s<<endl;
            if(s==0) d.pb(f);
        }
        for(auto x:d) mp.erase(x);
    }
    cout<<ans<<endl;
}
int main()
{
    fastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
