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
unordered_map<string, bool> h;
bool rec(string s, int a, int b, int c, int d, int pos)
{
    string key = to_string(a) + to_string(b) + to_string(c) + to_string(d) + to_string(pos);
    int n = s.length();
    if (pos == n)
    {
        if (a == 0 && a == b && b == c && c == d)
            return h[key] = true;
        return h[key] = false;
    }
    if (h.find(key) != h.end())
        return h[key];
    int f = 0;
    if (a > 0 && s[pos] == 'A')
        f |= rec(s, a - 1, b, c, d, pos + 1);
    if (f)
        return h[key] = true;
    if (b > 0 && s[pos] == 'B')
        f |= rec(s, a, b - 1, c, d, pos + 1);
    if (f)
        return h[key] = true;
    if (c > 0 && pos + 1 < n && s[pos] == 'A' && s[pos + 1] == 'B')
        f |= rec(s, a, b, c - 1, d, pos + 2);
    if (f)
        return h[key] = true;
    if (d > 0 && pos + 1 < n && s[pos] == 'B' && s[pos + 1] == 'A')
        f |= rec(s, a, b, c, d - 1, pos + 2);
    if (f)
        return h[key] = true;
    return h[key] = false;
}
void solve()
{
    new4(a, b, c, d);
    string s;
    cin >> s;
    if (count(s.begin(), s.end(), 'A') != a + c + d)
    {
        cout << "NO" << endl;
        return;
    }

    s+=s[s.size()-1];
    int n = s.length();

    // break in groups
    string curr = string(1, s[0]);
    vector<ll> ab, ba;
    ll commoncount = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == s[i - 1])
        {
            // cout<<curr<<endl;
            if (curr.length() == 1){}
                // continue; // do nothing
            else if (curr.length() & 1)
                commoncount += curr.length() / 2; // baa or ababa kind of
            else
            {
                if (curr[0] == 'A')
                    ab.pb(curr.size() / 2);
                else
                    ba.pb(curr.size() / 2);
            }
            curr = "";
        }
        curr.pb(s[i]);
    }

    sort(ab.begin(), ab.end());
    sort(ba.begin(), ba.end());


    // validate adb, ba
    ll cntab = 0, cntba = 0, cmncntleft = commoncount;
    for (auto &x : ab)
    {
        ll req = c - cntab;
        if (req >= x)
        {
            cntab += x;
            x = 0;
        }
        else
        {
            cntab += req;
            x -= req;
        }
    }
    for (auto &x : ba)
    {
        ll req = d - cntba;
        if (req >= x)
        {
            cntba += x;
            x = 0;
        }
        else
        {
            cntba += req;
            x -= req;
        }
    }

    if (cntab < c)
    {
        ll req = c - cntab;
        cntab += min(req, cmncntleft);
        cmncntleft -= min(req, cmncntleft);
        req = c - cntab;

        if (req > 0)
        {
            for (auto &x : ba)
            {
                if (!x)
                    continue;
                ll r = c - cntab;
                if(r>=x-1){
                    cntab+=x-1;
                    x=0;
                }else{
                    cntab += r;
                    x-=r+1;
                }
            }
        }
    }

    if (cntba < d)
    {
        ll req = d - cntba;
        cntba += min(req, cmncntleft);
        cmncntleft -= min(req, cmncntleft);
        req = d - cntba;

        if (req > 0)
        {
            for (auto &x : ab)
            {
                if (!x)
                    continue;
                ll r = d - cntba;
                if(r>=x-1){
                    cntba+=x-1;
                    x=0;
                }else{
                    cntba += r;
                    x-=r+1;
                }
            }
        }
    }
    if(cntab>=c && cntba>=d){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}
int main()
{
    fastIO;
    int t = 1;
    cin >> t;
    while (t--)
    {
        h.clear();
        solve();
    }
    return 0;
}
