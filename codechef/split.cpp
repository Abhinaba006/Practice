#include<bits/stdc++.h>
using namespace std;
void split(string a, int n)
{
    char s=a[n-1];
    for(int i=0;i<=n-2;i++){
        if(a[i]==s){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string a;
        cin>>n>>a;
        split(a, n);
    }
    return 0;
}
