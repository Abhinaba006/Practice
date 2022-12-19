#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, res=0;
    cin>>n;
    int min[4]={1, 6, 12, 24};
    if(n<9){
        res = n*21;
        res -= min[n-1];
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}