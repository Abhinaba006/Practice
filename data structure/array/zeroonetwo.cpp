#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int z=0, o=0, t=0, temp=0, n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        switch(temp){
        case 0:
            z++;
            break;
        case 1:
            o++;
            break;
        case 2:
            t++;
            break;
        }
    }
    for(int i=0;i<z;i++)
        cout<<0<<" ";
    for(int i=0;i<o;i++)
        cout<<1<<" ";
    for(int i=0;i<t;i++)
        cout<<2<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
