#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
void solve()
{
    unordered_set<int> s;
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    if(s.size()<k){
        cout<<n<<endl;
        return;
    }
    int lastOccur=0, ans=-1;
    vector<int> cnt(k, 0);
    // cout<<"test";
    for(int i=0;i<n;i++){
        for(int j=lastOccur;j<n;j++){
            cnt[a[j]-1]++;
            int len = j-i+1;
            int countzero = count(cnt.begin(), cnt.end(), 0);
            if(countzero>0)
                ans = max(ans, len);
            else{
                lastOccur=j+1;
                break;
            }
        }
        cnt[a[i]-1]--;
    }
    cout<<ans<<endl;
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