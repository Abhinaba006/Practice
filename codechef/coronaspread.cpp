#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int mx=1;
            for(int j=0;j<n;j++){
                if(j>i && a[j]<a[i] && j-i<=a[i]-a[j]){
                    mx++;
                    //cout<<"for"<<a[i]-a[j]<<" "<<i-j<<" "<<mx<<endl;
                }
                if(j<i && a[j]>a[i] && i-j<=a[j]-a[i]){
                    mx++;
                    //cout<<"foraj-ai"<<a[j]-a[i]<<" "<<i-j<<" "<<mx<<endl;
                }
            b[i]=mx;
            }
        }
        //for(int i=0;i<n;i++){
        //    cout<<b[i]<<endl;
        //}
        cout<<*min_element(b, b+n)<<" "<<*max_element(b, b+n)<<endl;
    }
}
