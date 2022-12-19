#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a, b, ans=0;
    cin>>a>>b;
    ans += (a/2) * (b/2);
    ans += (a+1)/2 * (b+1)/2;
    if (a%2==0 && b%2==0)
        ans--;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
