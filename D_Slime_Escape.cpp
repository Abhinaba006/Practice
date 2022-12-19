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
    // code here
    int n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    bool possible = true;

    int L = k - 1, R = k + 1;
    ll currSum = a[k];

    while (true)
    {
        // Left Iteration:
        int tempL = L;
        int newL = L;
        ll maxL = currSum;
        ll tempSum = currSum;

        while (tempL > 0 and tempSum + a[tempL] >= 0)
        {
            tempSum += a[tempL];
            tempL--;
            if (tempSum >= maxL)
            {
                maxL = tempSum;
                newL = tempL;
            }
        }

        if (tempL < 1)
        {
            break;
        }

        // Right Iteration:
        int tempR = R;
        int newR = R;
        ll maxR = currSum;
        tempSum = currSum;

        while (tempR <= n and tempSum + a[tempR] >= 0)
        {
            tempSum += a[tempR];
            tempR++;
            if (tempSum >= maxR)
            {
                maxR = tempSum;
                newR = tempR;
            }
        }

        if (tempR > n)
        {
            break;
        }

        if (maxR == currSum and maxL == currSum)
        {
            possible = false;
            break;
        }

        // Decision:

        if (maxL > currSum and maxR > currSum)
        {
            if (maxL >= maxR)
            {
                L = newL;
                currSum = maxL;
            }
            else
            {
                R = newR;
                currSum = maxR;
            }
        }
        else if (maxL > currSum)
        {
            L = newL;
            currSum = maxL;
        }
        else
        {
            R = newR;
            currSum = maxR;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
