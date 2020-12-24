#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    queue<char> q;
    int charCount[CHAR_MAX] = {0};

    for(int i=0;i<n;i++){
        q.push(s[i]);
        charCount[s[i]-'a']++;

    while(!q.empty()){
        if (charCount[q.front()-'a']>1)
            q.pop();
        else{
            cout<<q.front()<<" ";
            break;
        }
    }
    if(q.empty())
        cout<<-1<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
