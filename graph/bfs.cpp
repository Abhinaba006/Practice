class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
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
	        ans.push_back(temp);
	        q.pop();
	        
	        for(auto i=adj[temp].begin();i!=adj[temp].end();i++){
	            if(!visited[*i]){
	                visited[*i]=true;
	                q.push(*i);
	            }
	        }
	    }
	    return ans;
	}
};