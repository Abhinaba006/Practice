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

int gcdOfArray(vi v)
{
    int gcd = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        gcd = __gcd(gcd, v[i]);
    }
    return gcd;
}
void solve()
{
    // code here
    int n;
    cin>>n;
    int flag=0;
    vi a(n);
    rep(i,0,n)
    {
       cin>>a[i];
       if(a[i]==1) flag=1;
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else{
        // cout<<"NO"<<endl;
        vi temp;
        rep(i,0,n)
        {
            if(a[i]==1)continue;
            if(a[i]==0){
                cout<<"NO"<<endl;
                return;
            }
            temp.pb(a[i]-1);
        }
        if(temp.size()==0){
            cout<<"YES"<<endl;
            return;
        }
        // rep(i, 0, temp.size())
        // {
        //     cout<<temp[i]<<" ";
        // }
        // cout<<endl;
        int gcd=gcdOfArray(temp);
        if(gcd==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
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
