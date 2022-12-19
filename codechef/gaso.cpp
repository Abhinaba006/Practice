#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i;
    cin>>n;
    int sum=0;
    vector<int> c(n, 0);
    vector<int> a(n, 0);
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>c[i];
    i = min_element(c.begin(),c.end()) - c.begin();
    while(a[i]<n){
        cout<<a[i]<<endl;
        i = min_element(c.begin(),c.end()) - c.begin();
    // is the starting pos
        if(a[i]<n)
            c[i] = INT_MAX;
    }
    cout<<c[i]*a[i]<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
