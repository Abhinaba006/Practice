#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, w;
        cin>>n>>w;
          
        int val[n];
        int wt[n];

        for(int i=0;i<n;i++)
            cin>>val[i];
        for(int j=0;j<n;j++)
            cin>>wt[j];

        //dp

        int dp[n+1][w+1];

        memset(dp, 0, sizeof(dp));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(wt[i-1]>j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = max(dp[i-1][w-wt[i-1]]+val[i-1], dp[i-1][j]);
            }
        }
        cout<<dp[n][w]<<endl;
    }
}