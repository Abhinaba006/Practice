#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main(){
    map<char, int> mp;
    string s;
    getline(cin, s);
    mp['a']=0;
    mp['e']=0;
    mp['o']=0;
    mp['i']=0;
    mp['u']=0;
    int p=0;
    for(auto &c:s){
        if(c>='0' || c<='9'){
            cout<<0<<endl;
            return 0;
        }
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            p++;
            mp[c]++;
            c='1';
        }
    }
    if(s.length()==0){
        cout<<"Invalid Input";
        return 0;
    }
    if(p==0){
        cout<<0<<endl;
        return 0;
    }
    
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
    for(auto c:s) if(c!='1') cout<<c;
    cout<<endl;
}