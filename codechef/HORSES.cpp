#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(s, s+n);
        int diff, temp;
        temp = s[1] - s[0];
        diff = temp;
        for(int i=1;i<n;i++){
            temp = s[i] - s[i-1];
            if (temp<diff)
                diff = temp;
        }
        cout<<diff<<endl;
    }
}