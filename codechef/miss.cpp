#include <bits/stdc++.h>
using namespace std;
int sol(){
    int n, x1=0, x2=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        }
    x1 = a[0];
    for(int i=1;i<n-1;i++){
        x1 = x1 ^ a[i];
    }
    for(int i=2;i<n+1;i++){
        x2 = x2 ^ i;
    }
    return (x1 ^ x2);

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	    cout<<sol()<<endl;
	return 0;
}
