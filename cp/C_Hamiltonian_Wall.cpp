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
int dp[2][100000];
bool se(vector<vi> &grid, int t, int x, int y)
{
    // if(dp[x][y]==t) return 0;
    // cout<<"hi";
    cout << x << " " << y << " " << t << endl;
    grid[x][y] = 0;
    t--;
    if (t == 0)
        return 1;
    int n = grid[0].size();
    if (y + 1 < n && grid[x][y + 1] && se(grid, t, x, y + 1))
        return 1;
    if (grid[1 - x][y] && se(grid, t, 1 - x, y))
        return 1;
    grid[x][y] = 1;
    dp[x][y] = t + 1;
    return 0;
}
void solve()
{
    memset(dp, -1, sizeof(dp));
    new1(n);
    string s, t;
    cin >> s >> t;
    vector<vi> grid(2, vi(n, 0));
    rep(i, 0, n) grid[0][i] = s[i] == 'B';
    rep(i, 0, n) grid[1][i] = t[i] == 'B';
    int ta = 0;
    rep(i, 0, n) ta += grid[0][i];
    rep(i, 0, n) ta += grid[1][i];

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }
    rep(i, 0, n)
    {
        if (grid[0][i] + grid[1][i] == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    rep(i, 1, n)
    {
        if ((grid[0][i - 1] && grid[1][i] && !grid[0][i] && !grid[1][i - 1]) ||
            (!grid[0][i - 1] && !grid[1][i] && grid[0][i] && grid[1][i - 1]))
        {
            cout << "NO" << endl;
            return;
        }
    }
   
    cout << "YES" << endl;
    return;
}

int main()
{
    char str[] ="jo";
    char *p = str;
    p+=1;
    cout<<p<<endl;
}
