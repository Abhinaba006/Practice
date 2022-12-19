#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, d;
    cin>>n>>d;
    int temp;
    int day=0, r=0, nr=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<=9 || temp>=80)
            r++;
        else
            nr++;
    }
    day += r/d;
    if (r%d!=0)
        day++;
    day += nr/d;
    if (nr%d!=0)
        day++;
    cout<<day<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
