#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    int pos=0, cnt=0;
    while(pos+2<n){
        if(a[pos+2]==1)     pos++;
        else                pos+=2;
        cnt++;
    }
    if(a[n-2]==0 && a[n-3]==1)           cnt++;
    cout<<cnt;
}
