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
// #define m(a,b) map<a,b>
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
bool isPal(string s)
{
    int i = 0, j = s.length() - 1;
    while (i < j)
        if (s[i++] != s[j--])
            return false;
    return true;
}
void solve()
{
    // code here
    new2(n, m);
    string s;
    cin >> s;
    if (s == string(n, '0'))
    {
        cout << n * m << endl;
        return;
    }
    if (s == string(n, '1'))
    {
        cout << 1 << endl;
        return;
    }
    int t = 0;
    for (auto c : s)
        t += c == '1';
    if (m % 2)
    {
        int ans = 0;
        if (t % 2)
        {
            cout << ans << endl;
            return;
        }
        int m1 = 0;
        int mid = t / 2;
        for (auto c : s)
        {
            m1 += c == '1';
            if (mid == m1)
                ans++;
        }
        cout << ans << endl;
        return;
    }
    if (t % 2)
    {
        cout << 1 << endl;
        return;
    }
    int mid = t / 2;
    int ans = 0;
    int m1 = 0;
    for (auto c : s)
    {
        m1 += c == '1';
        if (mid == m1)
            ans++;
    }
    int i = s.length() - 1;
    while (s[i] == '0')
    {
        ans++;
        i--;
    }
    cout << ans << endl;
    return;
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
