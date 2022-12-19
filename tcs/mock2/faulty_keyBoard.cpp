#include<bits/stdc++.h>
using namespace std;
int dp[500];
int solve(int n){
    if(n==1)
        return 1;
    if(dp[n]!=-1) return dp[n];
    int ans=2;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            ans = max(solve(n/i)+1,ans);
    }
    return dp[n]=ans;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}