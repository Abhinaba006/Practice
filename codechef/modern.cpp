#include<bits/stdc++.h>
using namespace std;
int value(string a)
{
    if(a=="bronze")
        return 1;
    if(a=="silver")
        return 2;
    return 4;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int sack1=0, sack2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        int val;
        cin>>s;
        val = value(s);
        if(val==1)
            sack1++;
        else if(val==2){
            if(sack1==0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            sack1--;
            sack2++;
        }
        else if(val==4){
            if(sack2>0 && sack1>0){
                sack2--;
                sack1--;
            }
            else if(sack2==0 and sack1>0){
                sack1 -= 3;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES";
}
