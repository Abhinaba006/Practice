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
void print(vector<vi> &v)
{
    cout<<"printing vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int minStepToReachTarget(vector<int> KnightPos, vector<int> TargetPos, int N)
{
    // Code here
    static int xpath[] = {1, 1, 2, 2, -1, -1, -2, -2};
    static int ypath[] = {2, -2, 1, -1, 2, -2, 1, -1};
    int x = KnightPos[0], y = KnightPos[1], t1 = TargetPos[0], t2 = TargetPos[1], count = 0;
    vector<vector<int>> vis(N, vector<int>(N, 0));
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x - 1][y - 1] = 1;
    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            // cout<<"hi ";
            pair<int, int> top = q.front();
            // if (top.first == t1 && top.second == t2)
            //     return count;
            print(vis);
            q.pop();
            for (int i = 0; i < 8; i++)
            {
                int newx = top.first + xpath[i], newy = top.second + ypath[i];
                if (newx > 0 && newy > 0 && newx <= N && newy <= N && vis[newx - 1][newy - 1] == 0)
                {
                    q.push({newx, newy});
                    vis[newx - 1][newy - 1] = 1;
                }
            }
        }
        count++;
    }
    return -1;
}
int main()
{
    fastIO;
    vi v1 = {4, 5}, v2 = {1, 1};
    cout << minStepToReachTarget(v1, v2, 6);
}
