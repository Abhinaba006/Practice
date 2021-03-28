#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int v, e;
        cin>>v>>e;
        vector<vector<int>> adj[v];
        int i=0;
        while(i++<e){
            int u, v, w;
            cin>>u>>v>>w;
            vector<int> t1, t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);


        }
    }
}