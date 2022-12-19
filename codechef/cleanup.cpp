#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;
    int a[k+1];
    for(int i=1;i<=k;i++)    cin>>a[i];
    int an[n+1];
    vector<int> ans;
    for(int i=1;i<=n;i++)   an[i]=i;
    for(int j=1;j<=k;j++)   an[a[j]]=0;
    int p=1;
    for(int i=1;i<=n;i++){
        if(an[i])
            ans.push_back(an[i]);
    }
    for(int i=0;i<ans.size();i++){
        if(i%2==0)
            cout<<ans[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        if(i%2==1)
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)  solve();
}