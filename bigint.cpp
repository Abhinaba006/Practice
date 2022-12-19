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
int largestInteger(int num)
{
    string m, o, e;
    m = to_string(num);
    reverse(m.begin(), m.end());
    for(int i = 0; i < m.size(); i++)
    {
        if((m[i]-'0')%2){
            o.push_back(m[i]);
        }else{
            e.push_back(m[i]);
        }
    }
    sort(o.begin(), o.end());
    sort(e.begin(), e.end());
    // cout<<m<<endl;
    // cout<<o<<" "<<e<<endl;
    string ans;
    int h=0, j=0;
    for(int i=0;i<m.size();i++){
        if((m[i]-'0')%2){
            ans.push_back(o[h]);
            h++;
        }else{
            ans.push_back(e[j]);
            j++;
        }
    }
    reverse(ans.begin(), ans.end());
    int f = atoi(ans.c_str());
    return f;
}

string minimizeResult(string e) {
    int plus = e.find('+');
    int res = atoi(e.substr(0, plus).c_str()) + atoi(e.substr(plus+1).c_str()), n = e.length();
    int left = 0, right = n;
    for(int i=0;i<=plus;i++){
        for(int j=plus+2;j<=n;j++){
            int a = atoi(e.substr(0, i).c_str());
            int b = atoi(e.substr(i, plus-i).c_str());
            int c = atoi(e.substr(plus+1, j-plus-1).c_str());
            int d = atoi(e.substr(j).c_str());

            int t = (a==0?1:a) * (b+c) * (d==0?1:d);
            if((b!=0 && c!=0) && t < res){
                res = t;
                left = i;
                right = j;
            }
                        cout<<i<<" "<<j<<" "<<plus<<endl;
            cout<<a<<" ( "<<b<<" + "<<c<<") "<<d<<"= "<<t<<endl;
        }
    }
    e.insert(left, "(");
    e.insert(right+1, ")");
    return e;

}
void solve()
{
    // code here
    // new1(n);
    // cout << largestInteger(n) << " ";
    string s;
    cin>>s;
    cout<<minimizeResult(s)<<endl;
}
int main()
{
    fastIO;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
