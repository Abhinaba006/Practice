#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        lli p=pow(10, 5)-2;
        cout<<p<<endl;
        lli d;
        vector <int> ans;
        cin>>d;
        if(d==0)
            ans.push_back(1);
        while(d>0){
            p = min(p, d);
            ans.push_back(p+2);
            ans.push_back(p+1);
            ans.push_back(1);
            d -= p;
        }
        cout<<ans.size()<<endl;
        for(auto v : ans){
            cout<<v<<" ";
        }
    }
}
