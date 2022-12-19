#include<bits/stdc++.h>
using namespace std;
struct Point{
    long long int x;
    long long int y;
};
int main(){
    long long int t;
    cin>>t;
    while(t--){
        Point point[4];
        int x, y, n, k;
        cin>>n>>k>>x>>y;
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }
        else{
            if(y>x){
                point[0] = {x+(n-y), n};
                point[1] = {n, x+(n-y)};
                point[2] = {y-x, 0};
                point[3] = {0, y-x};
            }
            else{
                point[0] = {n, y+(n-x)};
                point[1] = {y+(n-x), n};
                point[2] = {0, x-y};
                point[3] = {x-y, 0};
            }
            k = (k-1)%n;
            cout<<point[k].x<<" "<<point[k].y<<endl;
        }
    }
    return 0;
}