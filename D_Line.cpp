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
    ll n;      \
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
void solve()
{
    // code here
    new1(n);
    ll mid = n / 2;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll init = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            init += i;
        else
            init += (n - i) - 1;
    }
    vl ans;
    for(ll i=0;i<n/2;i++){
        if(s[i]=='L'){
            s[i]='R';
            init +=  (n-i-1) - i;
            ans.pb(init);
        }
        ll j = n-i-1;
        if(s[j]=='R'){
            s[j]='L';
            init += j-i;
            ans.pb(init);
        }
    }
    for(ll x:ans) cout<<x<<" ";
    ll l = n-ans.size();
    while(l--) cout<<init<<" ";
    cout<<endl;
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
