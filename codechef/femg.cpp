#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ir=0, mg=0, ans=0, j=0, S=0;  // i is the lasted blocked space
    for(int i=0;i<n;i++){
        S=0;
        int p=0;
        if (s[i]=='I')  ir = i;
        for (j=i+1;s[j]!='M' && j<n;j++){
            if (s[j]=='.')
                S++;
            cout<<"j is "<<s[j]<<endl;
            }
        j--;
        p = k+1-abs(i-j)-S;
        cout<<"p is "<<p<<endl;
        if (p>0)
            ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
