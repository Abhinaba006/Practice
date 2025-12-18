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
vector<string> dummy;
vector<string> pre()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
    rep(i, 0, 26) dummy.pb(s.substr(i, 1));
    rep(i, 0, 26) rep(j, 0, 26)
    {
        string t = s.substr(i, 1) + s.substr(j, 1);
        dummy.pb(t);
    }
    rep(i, 0, 26) rep(j, 0, 26) rep(k, 0, 3)
    {
        string t = s.substr(i, 1) + s.substr(j, 1) + s.substr(k, 1);
        dummy.pb(t);
    }
    return dummy;
}
set<string> c(string s)
{
    set<string> ans;
    int n = s.length();
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j<n-i+1; j++)
        {
            ans.insert(s.substr(j, i));
        }
    }
    return ans;
}
void solve()
{
    new1(n);
    string s;
    cin>>s;
    set<string> st = c(s);
    for(auto x:dummy){
        if(st.find(x)==st.end()){
            cout<<x<<endl;
            return;
        }
    }
}
int main()
{
    fastIO;
    pre();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
