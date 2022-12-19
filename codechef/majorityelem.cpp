#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d, temp, cnt=0;
    cin>>n;
    cin>>d;
    for(int i=1;i<n;i++){
        cin>>temp;
        if(d==temp)
            cnt++;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}


