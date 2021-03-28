#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, c0, c1, h, n0=0, n1=0, ans0=0, ans1=0, ans=0;
    cin>>n>>c0>>c1>>h;
    string s;
    cin>>s;
    // n0 number of zero
    // n1 number of one
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            n0++;
        else
            n1++;
    }
    ans0 += (n0*h) + (n*c1);
    ans1 += (n1*h) + (n*c0);
    ans += (c1*n1)+(c0*n0);

    cout<<min(ans, min(ans0, ans1))<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
