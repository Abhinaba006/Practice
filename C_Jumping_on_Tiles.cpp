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
#define vi vector<ll>
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
int chtoi(char c)
{
    return c - 'a';
}
void solve()
{
    // code here
    string s;
    cin >> s;
    vector<vi> hash(26);
    ll n = s.length();
    for (int i = 0; i < n; i++)
        hash[s[i] - 'a'].pb(i + 1);
    int f = s[0] - 'a', l = s[n - 1] - 'a';
    int flg = 0;
    if (f > l)
    {
        swap(f, l);
        flg++;
    }
    ll i = f;
    int ans = 0;
    ll cost = 0, last = -1;
    while (i <= l)
    {
        if (hash[i].size())
        {
            // cout<<(char)(i+'a')<<" ";
            if (last > -1)
                cost += (i - last);
            last = i;
            ans += hash[i].size();
        }
        i++;
    }
    cout << cost << " " << ans << endl;
    int p = 0;
    rep(i, 0, 26)
    {
        sort(hash[i].begin(), hash[i].end());
    }
    if (s[0] > s[n - 1])
    {
        while(l>=f){
            for (auto x : hash[l]) cout << x << " ";
            l--;
        }
    }
    else
    {
        rep(i, f, l + 1) for (auto x : hash[i]) cout << x << " ";
        cout << endl;
    }
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
