#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	void bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    bool *visited = new bool[V];
	    vector<int> ans;
	    for(int i=0;i<V;i++)
	        visited[i] = false; // mark all node as not visited
	        
	    queue<int> q;
	    
	    visited[0] = true; //marked the first node as visited
	    q.push(0);
	    
	    while(!q.empty()){
	        int temp = q.front();
	        cout<<temp<<" ";
	        q.pop();
	        
	        for(auto i=adj[temp].begin();i!=adj[temp].end();i++){
	            if(!visited[*i]){
	                visited[*i]=true;
	                q.push(*i);
	            }
	        }
        }
	}

    vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    bool *visited = new bool[V];
	    for(int i=0;i<V;i++)    visited[i] = false;
	    visited[0] = true;
        stack<int> s;
        vector<int> ans;
        s.push(0);

        while(!s.empty()){
            int temp = s.top();
            s.pop();
            ans.push_back(temp);

            for(auto i=adj[temp].begin();i!=adj[temp].end();i++){
                if(!visited[*i]==true){
                    visited[*i]=true;
                    s.push(*i);
                }
            }
        }
        return ans;
	}
};
int main(){
    int v, e;
    cin>>v>>e;
    vector<int> adj[v];

    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    Solution obj;
    obj.bfsOfGraph(v, adj);
    cout<<endl;
}