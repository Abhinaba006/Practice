/*color will be used
and pass by value method
if it is one that mean it is being processed and 2 means cycle is present
we will check starting from every vertex
so every time it set to 2 and at the it seted to 0 again*/

#include<bits/stdc++.h>
using namespace std;
bool isCycleUtil(int v, int par, vector<bool> &visited, vector<int>adj[]){
    visited[v] = true;
    for(auto i:adj[v]){
        if(i==par)  continue;
        if(visited[i]) return true;
        if(isCycleUtil(i, v, visited, adj))
            return true;
    }
    return false;
}
bool isCycle(int V, vector<int>adj[]){
    vector<bool> visited(V, false);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            if(isCycleUtil(i, -1, visited, adj)){
                return true;
            }
        }
    }
    return false;

}
int main()
{
    int T=1;
    //cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        for(int i=0;i<E;i++)
        {   
            int u, v;
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<V;i++){
            for(auto j=adj[i].begin();j!=adj[i].end();j++)
                cout<<*j<<" ";
            cout<<endl;
        }
        if(isCycle(V, adj))   cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
}