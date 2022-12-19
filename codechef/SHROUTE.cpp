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
void solve()
{
    // code here
    new2(n, m);
    Arr(an, n);
    Arr(am, m);
    vl left(n, -1);
    vl right(n, -1);
    vl ans(n);
    if (an[0] == 1)
        left[0] = 0;
    if (an[n-1] == 2)
        right[n-1] = 0;
    for (int i = 1; i < n; i++)
    {
        // left
        if (left[i - 1] != -1)
            left[i] = left[i-1] + 1;
        if (an[i] == 1)
            left[i] = 0;
    }
    for(int i=n-2;i>=0;i--){
        if(right[n+1]!=INT_MAX)
            right[i]=right[i+1]+1;
        if(an[i]==2)
            right[i]=0;
    }
    rep(i, n){
        ans[i]=min(right[i], left[i]);
    }
    ans[0]=0;
    for(int i=0;i<m;i++){
        if(ans[am[i]-1]==INT_MAX)
            ans[am[i]-1]=-1;
        cout<<ans[am[i]-1]<<" ";
    }
    cout<<'\n';
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
