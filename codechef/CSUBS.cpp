#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    if(n==k){
        cout<<0<<endl;
        return;
    }
    vector<int> sum(n-k+1, 0);
    for(int i=0;i<n-k+1;i++){
        for(int j=0;j<k;j++){
            sum[i]+=a[i+j];
        }
        // cout<<sum[i]<<" ";
    }
    long long int sum_int = *max_element(sum.begin(), sum.end());
    int res=0;
    for(auto i:sum){
        if(sum_int!=sum[i]) res++;
    }
    cout<<res<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}