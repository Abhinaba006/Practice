#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
 long long int min_product(int a[], int n, int k){
    // I am direcly applying dp, later i will use recursion
    reverse(a, a+n);
    if(n==1)            return a[0];
    else if (k>=n-1)    return (a[0]*a[n-1])%mod;

    else{
        vector<long long int> min_arr(n, LONG_LONG_MAX);
        min_arr[0] = a[0];
        for(int i=1;i<=k;i++){
            min_arr[i] = a[0] * a[i];
        }
        for(int i=k+1;i<n;i++){
            int j = i-1;
            long long int min_val = LONG_LONG_MAX;
            while(i-j<=k && j>=0){
                if(min_arr[j]<min_val)
                    min_val = min_arr[j];
                j--;
            }
            min_arr[i] = (a[i]*min_val);
        }
        /*for(int i=0;i<n;i++)
            cout<<min_arr[i]<<" ";
        cout<<endl;*/
        return min_arr[n-1]%mod;
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<min_product(a, n, k)<<endl;
    return 0;
}                   