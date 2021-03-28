#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        int temp=0, j;
        for(j=i;j<n && temp<s;j++)
        {
            temp += a[j];
        }
        if(temp==s)
        {
            cout<<i+1<<" "<<j+1;
            return;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
