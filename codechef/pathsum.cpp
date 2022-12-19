#include<bits/stdc++.h>
using namespace std;
const int N = 105;
//adjacency list
vector<int> graph[N];
// array to output
int nums[N];
void dfs(int u, int p)
{
    nums[u] = (nums[p] & 1 ? 2:1);
    for(auto v:graph[u]){
        if(v != p){
            dfs(v, u);
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
         int u, v;
         cin>>u>>v;
         graph[u].push_back(v);
         graph[v].push_back(u);
    }
    nums[0] = 1;
    dfs(1, 0);
    for(int i=1;i<=n;i++){
            cout<<nums[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n;i++){
        graph[i].clear();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)  solve();
    return 0;
}
