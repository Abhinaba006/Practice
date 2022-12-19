#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    cin>>k;
    k = a[k-1];
    sort(a, a+n);
    int i;
    for(i=0;i<n;i++)    if(a[i]==k) break;
    cout<<i+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}