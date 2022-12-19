#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> a;
    stack <int> t;
    int c, n;
    cin>>n;
    while(n--){
        cin>>c;
        switch(c){
        case(1):
            {
                int x;
                cin>>x;
                a.push(x);
                //cout<<"test";
                if(a.size()==1)
                    t.push(x);
                else if(x>t.top())
                    t.push(x);
                else
                    t.push(t.top());
                break;
            }
        case(2):
            {
                a.pop();
                t.pop();
                break;
            }
        case(3):
            {
                cout<<t.top()<<endl;
                break;
            }
        }
    }

}
