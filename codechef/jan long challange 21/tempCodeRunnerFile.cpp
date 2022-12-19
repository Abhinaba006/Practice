#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        int a_sum =0, b_sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a_sum += a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            b_sum += b[i];
        }
        sort(b, b+m);
        sort(a, a+n);
        int dif = a_sum - b_sum;
        int i=0;
        while(dif<1){
            dif +=  (b[i]-a[i]);
            i++;
        }
        cout<<i<<endl;

    }
}