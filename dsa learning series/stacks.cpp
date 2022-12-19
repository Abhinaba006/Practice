#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector <int> res;
        res.push_back(a[0]);
        for(int i=1;i<n;i++){
            int pos=upper_bound(res.begin(),res.end(),a[i])-res.begin();
			if(pos==res.size())
				res.push_back(a[i]);
			else
				res[pos]=a[i];
        }
        cout<<res.size()<<" ";
        for(int it=0;it<res.size();it++)
            cout<<res[it]<<" ";
        cout<<endl;
    }
}