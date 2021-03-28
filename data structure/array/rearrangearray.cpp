#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n], ans[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a, a+n);
    int last=n-1, first=0;
    for(int j=0;j<n;j++)
    {
        ans[j]=a[last];
        last--;
        ans[j+1] = a[first];
        first++;
        j++;
    }
    for(int i=0;i<n;i++)    cout<<ans[i]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
        cout<<endl;
}
