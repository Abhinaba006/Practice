#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l;
    string s;
    cin>>l;
    cin>>s;
    int ch = 0;
    for(int i=0;i<l;i++){
        if(s[i]=='1')
            ch++;
        else
        {
            ch--;
        }
        if(ch>=0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}