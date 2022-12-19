#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    long long int ans=0;
    sort(a, a+n);
    int l=0, r=n-1, m=1;
    if(a[l]==a[r]){
        cout<<0<<endl;
        return;
    }
    else{
        while(m<r){
            ans = max(ans, (abs(a[l]-a[m])+abs(a[m]-a[r])+abs(a[r]-a[l])));
            m++;
        }
        cout<<ans<<endl;
        return;
    }

    
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}