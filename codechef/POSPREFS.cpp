#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int k=6, n=10, sign=1;
    cin>>n>>k;
    int a[n];
    if(n%2==1)
        sign *= -1;
    for(int i=0;i<n;i++){
        a[i]=(i+1)*sign;
        sign*=-1;
    }
    int sum=0, cnt=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>0)
            cnt++;
    }
    //cout<<cnt<<" "<<k<<endl;
    if(cnt>k){
        for(int i=n-2;i>=0 && cnt>k;i-=2){
            a[i] = a[i]*-1;
            cnt--;
            //cout<<cnt<<" - "<<endl;
        }
    }
    else{
        for(int i=n-1;i>=0 && cnt<k;i--){
            if(a[i]<0)
                cnt++;
            a[i] = abs(a[i]);
            //cout<<cnt<<" + "<<endl;
        }
    }
    //cout<<cnt<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
