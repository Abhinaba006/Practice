#include<bits/stdc++.h>
using namespace std;
int n, m;
void print(int *a, int n, int m)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<*((a+i*m)+j)<<" ";
        cout<<endl;
    }
}
void solve(int *a, int i, int j, int &temp)
{
    //print((int *)a, n, m);
    //cout<<endl;
    //cout<<temp<<" is increased"<<endl;
    if (*((a+i*m)+j)==0)
    {
        //cout<<"returning"<<endl;
        return;
    }
    else if (*((a+i*m)+j)==1) {
        //cout<<"i got the value "<<*(a+(i*n)+j)<<" in pos "<<i<<" "<<j<<endl;
        temp += 1;
        *((a+i*m)+j) = 3;
        if(i+1<n)
            solve(a, i+1, j, temp);
        if(i+1<n && j+1<m)
            solve(a, i+1, j+1, temp);
        if(i+1<n && j-1>=0)
            solve(a, i+1, j-1, temp);
        if(i-1>=0)
            solve(a, i-1, j, temp);
        if(i-1>=0 && j+1<m)
            solve(a, i-1, j+1, temp);
        if(i-1>=0 && j-1>=0)
            solve(a, i-1, j-1, temp);
        if(j+1<m)
            solve(a, i, j+1, temp);
        if(j-1>=0)
            solve(a, i, j-1, temp);
        }
}
int main()
{
    int temp=0, ans=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp=0;
            solve((int *)a, i, j, temp);
            //cout<<temp<<"___"<<endl;
            ans = max(temp, ans);
            //cout<<"__________________"<<endl;
        }
    }
    cout<<ans;
}
