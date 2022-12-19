#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        for(int i=0;i<l;i+=4){
            int ans=0;
            for(int j=0;j<4;j++){
                int pos = 3-j;
                int mul = s[j+i] - '0';
                //cout<<"current mul * 2^pos is "<<pos<<" "<<mul<<endl;
                ans += mul * pow(2, pos);   
                //2 4 1111 8 00001111cout<<"ans is "<<ans<<endl;
            }
            cout<<char('a'+ ans);
        }
        cout<<endl;
    }
}