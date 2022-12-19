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
ll calc(vector<pair<int, int>> v, ll n)
{
    ll ans=LLONG_MAX;
    vector<int> prefix_max(n), prefix_min(n);
    vector<int> suffix_max(n), suffix_min(n);
    prefix_max[0] = v[0].second;
    prefix_min[0] = v[0].second;
    for (int i = 1; i < n; i++)
    {
        prefix_max[i] = max(prefix_max[i - 1], v[i].second);
        prefix_min[i] = min(prefix_min[i - 1], v[i].second);
    }
    suffix_max[n - 1] = v[n - 1].second;
    suffix_min[n - 1] = v[n - 1].second;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix_max[i] = max(suffix_max[i + 1], v[i].second);
        suffix_min[i] = min(suffix_min[i + 1], v[i].second);
    }
    for (int i = 0; i < n-1; i++)
    {

        ll rect1l = (prefix_max[i] - prefix_min[i]);
        ll rect1b = v[i].first - v[0].first;
        ll rect2l = suffix_max[i+1] - suffix_min[i+1];
        ll rect2b = v[n - 1].first - v[i+1].first;

        ans = min(ans, (rect1b * rect1l) + (rect2b * rect2l));
    }

    return ans;
}
void solve()
{
    // code here
    new1(n);

    vector<pair<int, int>> v1;
    vector<pair<int, int>> v2;

    rep(i, n)
    {
        ll x, y;
        cin>>x>>y;
        v1.push_back(make_pair(x, y));
        v2.push_back(make_pair(y, x));
    }

    if (n <= 2)
    {
        cout << "0\n";
        return;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    ll ans1 = calc(v1, n);
    ll ans2 = calc(v2, n);

    cout << min(ans1, ans2) << '\n';
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
