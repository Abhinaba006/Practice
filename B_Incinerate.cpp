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
#define vpi vector<pl>
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
    ll arr[n];     \
    rep(i, 0, n) cin >> arr[i];
void solve()
{
    new2(n, k);
    Arr(h, n);
    Arr(p, n);
    map<ll, ll> mp;
    rep(i, 0, n) mp[p[i]]++;
    vpl pp(n);
    rep(i, 0, n) pp[i]={h[i], p[i]};
    sort(pp.begin(), pp.end());
    ll pos=0, last_k=0;
    while(pos<n && k>0){
        while(pos<n && pp[pos].F-last_k-k<=0){
            mp[pp[pos].S]--;
            if(mp[pp[pos].S]==0) mp.erase(pp[pos].S);
            pos++;
        }
        last_k += k;
        if(mp.size())  k = k-(*mp.begin()).F;
        
    }
    YesNo(pos==n);
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
