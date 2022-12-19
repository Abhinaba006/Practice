#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    void solve()
    {
        int N, n, m;
        cin >> N >> m;
        long long int n = pow(n, 2);
        long long int corner = 4 * (n - (1 + m * 3));
        long long int side = 4 * 6 * (n - (1 + m * 5));
        long long int mid = (n  - 28 )*(n-(1+(m*8)));
        cout<<corner+mid+side<<'\n';
    }
    while (t--)
        solve();
}