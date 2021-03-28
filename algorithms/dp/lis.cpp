#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n], b[n];
    memset(b, 0, sizeof(b));
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
        {
            if (a[j]<a[i])
                b[i] = max(b[i], b[j]+1);
        }
    }
    cout<<*max_element(b, b+n)+1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
