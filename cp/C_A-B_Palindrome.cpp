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
    new2(a, b);
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n-1-i] || s[i]=='?')
            continue;
        if (s[n - 1 - i] != '?')
        {
            cout << -1 << endl;
            return;
        }
        s[n - 1 - i] = s[i];
    }
    reverse(s.begin(), s.end());
   for (int i = 0; i < n / 2 ; i++)
    {
        if (s[i] == s[n-1-i] || s[i]=='?')
            continue;
        if (s[n - 1 - i] != '?')
        {
            cout << -1 << endl;
            return;
        }
        s[n - 1 - i] = s[i];
    }
    for (char c : s)
    {
        if (c == '0')
            a--;
        if (c == '1')
            b--;
    }
    // midd
    if (n % 2 && s[n/2]=='?')
    {
        if (a > 0 && a%2)
        {
            a--;
            s[n / 2] = '0';
        }
        else if (b > 0 && b%2)
        {
            b--;
            s[n / 2] = '1';
        }
        else
        {
            cout << -1<< endl;
            return;
        }
    }
    // common
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?')
        {
            if (a > 1)
            {
                s[i] = s[n - 1 - i] = '0';
                a -= 2;
            }
            else if (b > 1)
            {
                s[i] = s[n - 1 - i] = '1';
                b -= 2;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (a == 0 && b == 0)
        cout << s << endl;
    else
        cout <<-1<< endl;
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
