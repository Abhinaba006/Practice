#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int solve(vector<int>&a, int k1, int k2, int k, int i){
    int n=a.size();
    if (k1>=k){
        if(k2>=k) return i;
        return 1e9;
    }

    if(i>=n) return 1e9;

    if (dp[i][k1]!=-1){
        return dp[i][k1];
    }

    return dp[i][k1]=min(solve(a, k1+a[i], k2, k, i+1), solve(a, k1, k2+a[i], k, i+1));
}
void tests(){
    int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greater<int>());

        dp.assign(n+1, vector<int>(k+10, -1));
        int k1=0, k2=0;
        int res = solve(a, k1, k2, k, 0);

        if(res==1e9)    cout<<-1<<endl;
        else cout<<res<<endl;
}
int32_t main( int argc , char ** argv ){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        tests();
    }
    return 0;
}