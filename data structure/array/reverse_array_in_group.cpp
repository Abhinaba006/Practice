#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

    void reverseInGroups(vector<long long> &arr, int n, int k){
        for (int i = 0; i < n; i += k) { 
            int left = i; 
            int right = min(i + k - 1, n - 1); 
            while (left < right) 
                swap(arr[left++], arr[right--]); 
        }
    }
};
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n=11;
        cin>>n;
        vector<long long> arr(n, 0);
        int k=4;
        cin>>k;
        for(long long i=0;i<n;i++){
            arr[i] = i+1;
            cin>>arr[i];
        }
        Solution ob;
        //cout<<n<<" "<<k<<" befoire"<<endl;
        ob.reverseInGroups(arr, n, k);
        //cout<<n<<" "<<k<<" after"<<endl;
        for(long long i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}