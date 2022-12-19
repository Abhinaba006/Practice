#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int ka = k, kb = k;
        vector <int> h(n, 0);
        for(int i=0;i<n;i++)
            cin>>h[i];
        sort(h.begin(), h.end());
        int temp=k, count=0;
        for(int i=0;i<n && count<2;i++){
            if(temp>0){
                temp -= h[i];
            }
            else{
                temp = k;
                count++;
            }
            if(count==1){
                cout<<n-i<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}