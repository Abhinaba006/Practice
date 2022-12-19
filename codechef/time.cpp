#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int year;
        cin>>year;
        if((year%400==0) || (year%4==0 && year%100!=0))
            cout<<"February 29"<<endl;
        else
            cout<<"March 1"<<endl;
    }
}
