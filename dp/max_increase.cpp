#include<bits/stdc++.h>
using namespace std;
class Solution{
    
    public:
    int MaxSumIS(int a[], int n){
        int lis[n], lis_sum[n];
        lis[0] = 1;
        memset(lis, 0, sizeof(lis));
        for(int i=0;i<n;i++)
            lis_sum[i] = a[i];
        lis_sum[0] = a[0];
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j] && lis[i]<lis[j]+1){
                    lis[i] = lis[j]+1;
                    lis_sum[i] = max(lis_sum[i], lis_sum[j]+a[i]);
                } 
            }
        }
        return (int)*max_element(lis_sum, lis_sum+n);
    }
};
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];
        
        Solution ob;

        cout<<ob.MaxSumIS(a, n)<<"\n";

    }
    return 0;
}