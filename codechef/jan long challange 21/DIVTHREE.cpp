#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, d;
        cin>>n>>k>>d;
        int sum=0, temp=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum += temp;
        }
        
        sum /= k;
        if(sum>d)
            sum = d;
        cout<<sum<<endl;
    }
}