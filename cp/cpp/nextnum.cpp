#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    bool k = next_permutation(s.begin(), s.end());
    int p = stoi(s);
    if(!k){
        cout<<-1<<endl;
        return 0;
    }
    cout<<p<<endl;
}