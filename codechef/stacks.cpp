#include<bits/stdc++.h>
using namespace std;
int up(int a[], int l,int r,int n)
{
    int m;
    while(l<r-1){
        m=(l+r+1)/2;
        if(a[m]>n){     r=m-1;}
        else      {   l=m;}
     }
     return m;
}
int main()
{       int t;
        cin>>t;
        while(t--){
            int n=6, i=0;
            cin>>n;
            int a[n], res[n];
            for(int i=0;i<n;i++)    cin>>a[i];
            int s;
            cin>>s;
            cout<<up(a, 0, n, s)<<endl;;
        }
}
