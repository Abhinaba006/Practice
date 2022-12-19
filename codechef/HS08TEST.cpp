#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if((x%5==0) && (y>x+0.5))
    {
        y=y-x-0.50;
        cout<<setprecision(2)<<fixed;
        cout<<y;
    }
    else
    {
        cout<<setprecision(2)<<fixed;
        cout<<y;
    }
    return 0;
}