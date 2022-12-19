#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, ans=0;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        int watched = 0, q;
        for(int j=0;j<k;j++){
            int temp =0;
            cin>>temp;
            watched += temp;
        }
        cin>>q;
        if (q<=10 && watched >= m)
            ans++;
    }
    cout<<ans;
}