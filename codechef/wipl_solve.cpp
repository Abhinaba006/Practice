#include<bits/stdc++.h>
using namespace std; 
vector<vector<int>>dp;
int solve(vector<int>&arr,int h1,int h2,int k,int i)
{
    int n=arr.size();
    if(h1>=k)
    {
        if(h2>=k)return i;
        return 1e9;
    }
    
    if(i>=n)
    {
        return 1e9;
    }
    if(dp[i][h1]!=-1)
    {
        return dp[i][h1];
    }
    return dp[i][h1]=min(solve(arr,h1+arr[i],h2,k,i+1),solve(arr,h1,h2+arr[i],k,i+1));
}
void tests()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr.begin(),arr.end(),greater<int>());
    
    int h1=0;
    int h2=0;
    dp.assign(n+1,vector<int>(k+10,-1));
    int res=solve(arr,h1,h2,k,0);
    if(res==1e9)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<res<<endl;
    }
    
}
int32_t main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int t = 1;
	cin>>t;
	while(t--){
		tests();
	}
    return 0 ; 
}