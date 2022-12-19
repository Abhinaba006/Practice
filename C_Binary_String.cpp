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
ll cost(string &s, ll st, ll e, ll depth)
{
    // cout<<"st: "<<st<<" e: "<<e<<endl;
    // for (int i = st; i <= e; i++)
    // {
    //     cout << s[i];
    // }
    // cout << " " << depth << endl;
    if (st > e)
        return depth;
    ll zero = 0;
    ll one = 0;
    for (int i = st; i <= e; i++)
    {
        if (s[i] == '0')
            zero++;
    }
    if (zero <= depth)
        return depth;
    while (st < e)
    {
        while (st <= e && s[st] == '0')
        {
            st++;
            zero--;
        }
        while (st <= e && s[e] == '0')
        {
            e--;
            zero--;
        }
        if (s[st] == '1' && s[e] == '1')
            break;
    }
    if (zero <= depth)
        return depth;
    int f = cost(s, st+1, e, depth + 1), sf = cost(s, st, e-1, depth + 1);
    return min(f, sf);
}
void solve()
{
    // code here
    string s;
    cin >> s;
    cout << cost(s, 0, s.size() - 1, 0LL) << endl;
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
