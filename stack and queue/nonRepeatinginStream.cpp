#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n=4;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    map<char, int> m;
    for(int i=0;i<n;i++)
        m.insert(pair<char, int>(s[i], 0));
    // map is build for every char
    queue<char> st;
    for(int i=0;i<n;i++){
        m[s[i]]++;
        if(m[s[i]]<2){
            //cout<<s[i]<<" ";
            st.push(s[i]);
        }
        // that mean it is already appears once and it must be in stack
        // need to remove from stack if it is the
        while(!st.empty()){
            if(m[st.front()]>=2){
                cout<<"poping "<<st.front()<<endl;
                st.pop();
            }
            else
                break;
        }
        if(st.empty())
            cout<<-1<<" ";
        else
            cout<<st.front()<<" ";

    }
    cout<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
