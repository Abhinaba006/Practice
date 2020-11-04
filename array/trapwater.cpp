#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int res = 0;
    // basic approach
    //two loops, find the left max and the right max wall
    // then count hoe much can it hold
    for(int i=0;i<n;i++)
    {
        int left=a[i];
        for(int j=0;j<i;j++)
            left = max(a[j] , left);
        int right=a[i];
        for(int j=i+1;j<n;j++)
            right = max(right, a[j]);
        res += min(right, left)-a[i];
        //<<left<<" right "<<right<<endl;
    }
    cout<<res<<endl;
    int left[n], right[n];
    left[0] = a[0];
    for(int i=1;i<n;i++)
    {
        left[i] = max(left[i-1], a[i]);
    }
    right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i] = max(right[i+1], a[i]);
    }
    res=0;
    for(int i=0;i<n;i++)
        res += min(right[i], left[i])-a[i];
    cout<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
