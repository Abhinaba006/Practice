#include<bits/stdc++.h>
using namespace std;
int a, b;
long double dis(int x, int y)
{
    int m = pow((a-x), 2);
    int n = pow((b-y), 2);
    if (m+n==0)
        return 0;
    long double res = sqrt((m+n));
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    long double d, temp=0;
    cin>>a>>b;
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        d = dis(x, y);
        temp = max(d, temp);
    }
    cout<<setprecision(20)<<temp;
}
