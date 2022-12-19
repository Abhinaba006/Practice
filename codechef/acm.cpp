#include<bits/stdc++.h>
using namespace std;
int main()
{
    string l;
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        cin>>l;
        for(int j=0;j<m;j++){
            a[i][j] = int(l[j])-48;
        }
        //cout<<endl;
    }

    int mx=0, mn=9999;
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<n;j++){
                cout<<"com"<<endl;
            // this will just for comparison
            // it will compare the rows
            // make another loop for checking
            for(int c=0;c<m;c++){
                ans += a[i][c] | a[j][c];
                cout<<a[i][c];
            }
        cout<<endl;
        }
        //now compare
        // and save
        //cout<<ans<<endl;
        mx = max(mx, ans);
        mn = min(mn, ans);
    }
    cout<<mx<<endl<<mn;
}
