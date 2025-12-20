#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef long double ld;
#define fi first
#define se second
#define sz(x) (int((x).size()))
#define data _data
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        vector<string> v(n);
        for (string &i : v)
            cin >> i;

        int m = sz(s);
        int inf = 1000 << 20;
        vector<int> dp(m + 1, inf);
        dp[0] = 0;
        vector<pii> trace(m + 1);
        for(int i=1;i<=m;i++){
            for(int j=0;j<n;j++){
                if(v[j].size()<=i && s.substr(i-v[j].size(), v[j].size())==v[j]){
                    int prev = i - v[j].size();
                    for(int k=prev;k<=i;k++){
                        if(dp[prev]+1<dp[k]){
                            dp[k]=1+dp[prev];
                            trace[k] = {j, prev};
                        }
                    }
                }
            }
        }
            //   for (int i = 1; i <= m; ++i) {
            //      for (int j = 0; j < n; ++j) {
            //         if (sz(v[j]) <= i && s.substr(i - sz(v[j]), sz(v[j])) == v[j]) {
            //            int prv = i - sz(v[j]);
            //            for (int k = prv; k <= i; ++k) {
            //               if (dp[prv] + 1 < dp[k]) {
            //                  dp[k] = dp[prv] + 1;
            //                  trace[k] = pii(j, prv);
            //               }
            //            }
            //         }
            //      }
            //   }
            if (dp[m] == inf) cout
            << "-1\n";
        else
        {
            cout << dp[m] << "\n";
            int cur = m;
            while (cur)
            {
                cout << trace[cur].fi + 1 << " " << trace[cur].se + 1 << "\n";
                cur = trace[cur].se;
            }
        }
    }
}
