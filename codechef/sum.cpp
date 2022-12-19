#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n, ans=0;
    cin>>n;
    while(n--){
        int on;
        cin>>on;
        ans += on;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        cout<<solve()<<endl;
}
