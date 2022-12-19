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
#define rep(i, n) for (int i = 0; i < n; i++)
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
        continue;              \
    }
#define setval(a, val) memset(a, val, sizeof(a))
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define new1(n) \
    ll int n;   \
    cin >> n;
#define new2(n, k) \
    ll int n, k;   \
    cin >> n >> k;
#define new3(a, b, c) \
    ll int a, b, c;   \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    ll int a, b, c, d;   \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    ll int arr[n];  \
    rep(i, n) cin >> arr[i];
vector<ll> dp(1000003);
void rec()
{
    for (ll i = 0; i <= 1000002; i++)
    {
        if (i < 2)
        {
            dp[i] = i;
        }
        else
        {
            ll p = 2;
            while (i % p)
                p++;
            dp[i] = i + dp[i / p];
        }
    }
}
void solve()
{
    // code here
    int n;
    cin >> n;
    ll int ans = 0;
    rep(i, n)
    {
        ll int temp;
        cin >> temp;
        ans += dp[temp];
    }
    cout << ans << endl;
}
int main()
{
    fastIO;
    int t = 1;
    rec();
    while (t--)
        solve();
    return 0;
}
