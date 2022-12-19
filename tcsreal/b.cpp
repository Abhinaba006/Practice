#include<bits/stdc++.h>
using namespace std;
void rotaion (vector<vector<string>> v, vector<vector<string>> &ans){
    int m = v.size();
    int n = v[0].size();
    int i=0, j=0, dir=1;
    string temp = v[m-1][n-1];
    while(i<m){
        if(dir==1){
            temp = v[i][n-1];
            for(int j=n-1;j>0;j--){
                ans[i][j] = v[i][j-1];
            }
            if(i<m-1){
                ans[i+1][n-1] = temp;
            }            
        }else{
            temp = v[i][0];
            for(int j=0;j<n-1;j++){
                ans[i][j] = v[i][j+1];
            }
            if(i<m-1){
                ans[i+1][0] = temp;
            }
        }
        i++;
        dir = dir * (-1);
    }
    ans[0][0] = temp;
}
int main(){
    int m, n;
    cin>>m>>n;
    vector<vector<string>> v(m, vector<string>(n)), ans(m, vector<string>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int r;
    cin>>r;
    string fx;
    cin>>fx;
    r = r%(m*n);
    while(r>0){
        rotaion(v, ans);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j] = ans[i][j];
            }
        }
        r--;
    }
    int ai=-1, aj=-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
            if(ans[i][j]==fx){
                ai = i;
                aj = j;
            }
        }
        cout<<endl;
    }
    if(ai!=-1 && aj!=-1){
        cout<<"["<<ai<<", "<<aj<<"]";
    }else{
        cout<<"Not Available";
    }

    
   
    
}