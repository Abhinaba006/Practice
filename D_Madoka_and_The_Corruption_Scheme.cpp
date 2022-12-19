#include <bits/stdc++.h>
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
    ll n, k;       \
    cin >> n >> k;
#define new3(a, b, c) \
    int a, b, c;      \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    int a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    int arr[n];     \
    rep(i, 0, n) cin >> arr[i]
unsigned long long power(unsigned long long x, int y)
{
    unsigned long long res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
void solve()
{
    // code here
    new2(n, k);
    k = min(n, k);
    ll ans = 0;
    ll fac[100001];
    fac[0] = 1;
    for (int i = 1; i <= 100000; i++) fac[i] = (fac[i - 1] * i) % mod;
    for (int i = 0; i <= k; i++)
    {
        ll val = fac[n];
        val = (val * power(fac[i], mod-2))%mod;
        val = (val * power(fac[n-i], mod-2))%mod;
        ans = (ans + val) % mod;
    }
    cout << ans << endl;
}
int main()
{
    fastIO;
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}
