#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1000000007;
const ll INF = 1e9;
void solve()
{
    int n;
    cin>>n;
    ll sum=0, num;
    for(int i=0;i<n;i++){
        cin>>num;
        sum += num;
        sum = ((sum % MOD) + MOD) % MOD;
    }
    int q;
    cin>>q;
    while(q--){
        ll x;
        cin>>x;
        sum += sum;
        sum = ((sum % MOD) + MOD) % MOD;
        cout<<sum<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}