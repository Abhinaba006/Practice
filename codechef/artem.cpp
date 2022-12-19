#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //cout<<"---------------"<<endl;
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j+=2){
            if (flag%2==0){
                if(a[i][j]%2==0)
                    a[i][j]++;
                if(a[i][j+1]%2==1)
                    a[i][j+1]++;
            }
            if (flag%2==1){
                if(a[i][j]%2==1)
                    a[i][j]++;
                if(a[i][j+1]%2==0)
                    a[i][j+1]++;
            }
        }
        flag++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //cout<<"---------------"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
