#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q, ans=2;
    cin>>n>>q;
    int a[n+2];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i = 1; i <= n; i ++) {
		ans += (a[i] != a[i-1]);
	}
   while(q --) {
		int x, y;
		cin >> x >> y;
		if((a[x] == a[x-1]) && (a[x] == a[x+1])) {
			if(y != a[x]) ans += 2;
		}
		else if((a[x] != a[x-1]) && (a[x] == a[x+1])) {
			if(y != a[x]) ans ++;
			if(y == a[x-1]) ans --;
		}
		else if((a[x] == a[x-1]) && (a[x] != a[x+1])) {
			if(y != a[x]) ans ++;
			if(y == a[x+1]) ans --;
		}
		else {
			if(y == a[x-1]) ans --;
			if(y == a[x+1]) ans --;
		}
		a[x] = y;
		cout << ans-2 << "\n";
	}

    //for(int i=0;i<n;i++)    cout<<a[i]<<" ";

}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t=2;
    cin>>t;
    while(t--)
        solve();
}
