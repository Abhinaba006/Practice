#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]++;
        }
    sort(a, a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i-1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
        solve();
}
