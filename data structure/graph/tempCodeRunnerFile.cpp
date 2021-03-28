bool isCycleUtil(int v, vector<int> visited, vector<int>adj[]){
        if(visited[v]==2)   return true;
        visited[v] = 1;
        bool flag=false;
        for(int i=0;i<adj[v].size();i++){
            if(visited[adj[v][i]]==1)   visited[adj[v][i]] = 2;
            else{
                flag = isCycleUtil(i, visited, adj);
                if(flag) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int>adj[]){
        vector<int> visited(V, 0); // 0 not visited 1 visited not processed 2 both and if present that means there is cycle

        for(int i=0;i<V;i++){
            visited[i] = 1;
            for(int j=0;j<adj[i].size();++j)
            {
                bool FLAG = isCycleUtil(adj[i][j],visited,adj);
                if(FLAG==true)
                    return true;
            }
            visited[i] = 0;
        }
        return false;

    }