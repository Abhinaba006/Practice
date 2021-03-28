#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], dep[n];
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>dep[i];
        sort(arr, arr+n);
        sort(dep, dep+n);
        int i=1, j=0, ans=1, platform=1;
        while(i<n && j<n){
            // if any arrival time is befor the last departure timr
            // then platfor will be increased and if 
            // the departure happened then it will decreased
            if(arr[i]<=dep[j]){
                platform++;
                i++;
            }
            else{       // depeparture happen and we have a free platform
                platform--;
                j++;    //look for the next departure
            }
            ans = max(ans, platform);
        }
        cout<<ans<<endl;
    }
}