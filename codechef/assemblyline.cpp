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
#define NUM_LINE 2
#define NUM_STATION 4
int dp[1000][1000];
int carAssemblyrec(int a[][NUM_STATION], int t[][NUM_STATION], int *e, int *x, int n, int line)
{
    if (!n)
    {
        dp[n][line] = e[line] + a[line][0];
        return dp[n][line];
    }
    if (dp[n][line] != -1)
        return dp[n][line];
    int t0 = INT_MAX, t1 = INT_MAX;
    if (line)
        t1 = min(carAssemblyrec(a, t, e, x, n - 1, 1) + a[1][n], carAssemblyrec(a, t, e, x, n - 1, 0) + a[1][n] + t[0][n]);
    else
        t0 = min(carAssemblyrec(a, t, e, x, n - 1, 1) + a[0][n], carAssemblyrec(a, t, e, x, n - 1, 0) + a[0][n] + t[1][n]);

    dp[n][line] = min(t0, t1);
    return dp[n][line];
}
int carAssembly(int a[][NUM_STATION], int t[][NUM_STATION], int *e, int *x)
{
    int n = NUM_STATION - 1;
    memset(dp, -1, sizeof(dp));
    return min(carAssemblyrec(a, t, e, x, n, 0) + x[0], carAssemblyrec(a, t, e, x, n, 1) + x[1]);
}

int main()
{
    int a[][NUM_STATION] = {{4, 5, 3, 2},
                            {2, 10, 1, 4}};
    int t[][NUM_STATION] = {{0, 7, 4, 5},
                            {0, 9, 2, 8}};
    int e[] = {10, 12}, x[] = {18, 7};
    int t1[NUM_STATION], t2[NUM_STATION], i;

    cout << carAssembly(a, t, e, x);

    return 0;
}
