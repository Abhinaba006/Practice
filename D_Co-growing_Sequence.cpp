#include <iostream>
#include<bits/stdc++.h>>
using namespace std;
int minMovesToMakePalindrome() {
    string s;
    map<char, int> h;
    for(char c:s) h[c]++;
    int p=0;
    for(auto x:h){
        p+=x.second%2;
        if(p==2){
            cout<<"Impossible"<<endl;
            return;
        }
    }
    cin>>s;
        int ans=0;
        while(s.size()){
            int i = s.find(s.back());
            if(i==s.size()-1) ans += s.size()/2;
            else ans+=i, s.erase(i, 1);
            s.pop_back();
        }
        return ans;
    }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) minMovesToMakePalindrome()<<endl;
	return 0;
}
