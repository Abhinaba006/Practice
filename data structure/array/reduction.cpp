#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        while(s[j]=='p' && j<n)
            j++;
        if(s[i]=='0' && s[j]=='1'){
            ans ++;
            s[i]='p';
            s[j]='p';
            i = j;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
