#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1, v1, d2, v2, p;
    cin>>d1>>v1>>d2>>v2>>p;
    int day = 0;
    while(p>0){
        if (day>=d1)
            p -= v1;
        if (day>=d2)
            p -= v2;
        day++;
        //cout<<day<<" "<<p<<endl;;
    }
    if(p<=0)
        day--;
    cout<<day;
}
