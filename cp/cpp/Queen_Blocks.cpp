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
#define md 997244353
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
bool is(int x)
{
    return x >= 0 && x <= 7;
}
void show(vector<vi> v)
{
    for (auto c : v)
    {
        for (int x : c)
            cout << x << " ";
        cout << endl;
    }
}
void solve()
{
    new2(x, y);
    vector<vi> b(8, vi(8, 0));
    x--;
    y--;
    b[x][y] = 1;
    if ((x == 0 || x == 7) || (y == 0 || y == 7))
    {
        if ((x == 0 || x == 7) && (y == 0 || y == 7))
        {
            if (x == 7 && y == 7)
                b[x - 2][y - 1] = 2;
            if (x == 7 && y == 0)
                b[x - 2][y + 1] = 2;
            if (x == 0 && y == 7)
                b[x + 2][y - 1] = 2;
            if (x == 0 && y == 0)
                b[x + 2][y + 1] = 2;
        }
        else
        {
            int x1 = x - 1, y1 = y - 2, tx1 = x + 1, ty1 = y - 2;
            if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x - 1, y1 = y + 2, tx1 = x + 1, ty1 = y + 2;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x - 2, y1 = y + 1, tx1 = x - 2, ty1 = y - 1;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x + 2, y1 = y + 1, tx1 = x + 2, ty1 = y - 1;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
                b[x1][y1] = b[tx1][ty1] = 2;
        }
    }
    else{
        int x1 = x - 1, y1 = y - 2, tx1 = x + 1, ty1 = y + 2;
            if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x - 1, y1 = y - 2, tx1 = x + 1, ty1 = y + 2;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x - 2, y1 = y + 1, tx1 = x + 2, ty1 = y - 1;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x - 1, y1 = y + 2, tx1 = x + 1, ty1 = y - 2;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x + 2, y1 = y + 1, tx1 = x - 2, ty1 = y - 1;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
            {
                b[x1][y1] = b[tx1][ty1] = 2;
                x1 = x + 2, y1 = y + 1, tx1 = x + 2, ty1 = y - 1;
            }
            else if (is(x1) && is(tx1) && is(y1) && is(ty1))
                b[x1][y1] = b[tx1][ty1] = 2;

                
                
        }
    }
    show(b);
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
