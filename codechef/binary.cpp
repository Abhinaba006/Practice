#include<bits/stdc++.h>
using namespace std;
int s;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s;
    cin>>s;
    int l=0, r=n, m;
    while(l<r-1){
        m=(l+r)/2;
       cout<<a[m]<<endl;
        if(a[m-1]<=s and a[m]>s){
            break;
        }
        else if(a[m]>=s){   l=m; }
        else           {   r=m-1;}
    }

    cout<<m;
}
