#include<bits/stdc++.h>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump p[], int n)
{
    int curr_bal=0;, start = 0, en=1;
    while()
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p, n)<<endl;
    }
}
