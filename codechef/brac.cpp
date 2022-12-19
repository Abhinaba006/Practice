#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b;
    int n;
    cin>>n;
    while(n--){
        cin>>b;
        stack <char> bra;
        for(int i=0;i<b.length();i++){
            if(b[i]=='(' || b[i]=='{' || b[i]=='[')
                bra.push(b[i]);
            else
            {
                if(bra.size()==0)
                    {
                        cout<<"NO"<<endl;
                        goto m;
                    }
                else if((b[i]==')' && bra.top()=='(') || (b[i]=='}' && bra.top()=='{') || (b[i]==']' && bra.top()=='[')){
                    bra.pop();
                }
                else{
                    cout<<"NO"<<endl;
                    goto m;
                }
            }
        }
        if(bra.size()==0){
            cout<<"YES"<<endl;
        }
        m:;
    }
}
