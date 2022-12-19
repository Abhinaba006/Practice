#include<bits/stdc++.h>
using namespace std;
int solve(int n, int m, int a[], int s){
    // cout<<"----newloop----"<<n<<endl;
    // cout<<endl;
    if(n==0)
        return 1; // hit a solution
    if(n<0)
        return 0;
    int temp=0;
    for(int i=s;i<m;i++){
        temp += solve(n-a[i], m, a, i);
    }
    return temp;
}
int main(){
    int n, m;
    cin>>n>>m;
    int a[m];
    // sort(a, a+m);
    for(int i=0;i<m;i++)    cin>>a[i];
    int ans = solve(n, m, a, 0);
    cout<<ans;
}