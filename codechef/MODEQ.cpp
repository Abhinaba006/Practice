#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
// we will precompute for all possible m
const int m = 5e5 + 5;
vector<vector<int>> divs(m);
void pre()
{
    for(int i=1;i<m;i++){
        for(int j=i;j<m;j+=i){
            divs[j].push_back(i);
        }
    }
}
void solve()
{
    int n, M;
    cin>>n>>M;
    ll res=0;
    for(int i=2;i<=n;i++){
       int x = M - (M%i);
       if(x>0){
           res += lower_bound(divs[x].begin(), divs[x].end(), i)-divs[x].begin();
       }
       else     res += i-1;
    }
    cout<<res<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    pre();
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}