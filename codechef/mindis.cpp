#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<-1;
        return;
    }
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n];
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j<n)
            if(a[j]==a[i])
                break;
            else
                j++;
        if (j==n)
            b[i] = 10001;
        else
            b[i] = j-i;
    }
    int ans = *min_element(b, b+n-1);
    if (ans==10001)
        cout<<-1<<" ";
    else cout<<ans<<" ";

}
int main(){
    solve();
}
