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
    rep(i, n) cin >> arr[i];
vi prime;
void sieve()
{
    prime.pb(2);
    for (int i = 3; i < 100; i += 2)
    {
        bool flag = true;
        for (int j = 0; j < prime.size(); j++)
        {
            if (i % prime[j] == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            prime.pb(i);
        }
    }
}
void solve()
{
    // code here
    new1(n);
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
        {
            cout<<"1"<<endl<<s[i]<<endl;];
        }
        else
        {
            
        }
    }
    
    }
    // cout<<"==========\n";
}
int main()
{
    // fastIO;
    sieve();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
