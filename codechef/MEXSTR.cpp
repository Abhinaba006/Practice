#include <bits/stdc++.h>
#define ll long long int
#define inf LLONG_MAX
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll> next0(n, inf), next1(n, inf);
    ll n0 = inf, n1 = inf;
    // fill next 0 and next 1
    for (ll i = n - 1; i >= 0; i--)
    {
        next0[i] = n0;
        next1[i] = n1;

        if (s[i] == '0')
            n0 = i;
        else
            n1 = i;
    }

    //corner case
    if (n0 == inf)
    {
        cout << "0\n";
        return;
    }

    if (n1 == inf)
    {
        cout << "1\n";
        return;
    }

    vector<ll> len(n);
    bool one = false, zero = false;
    int cnt = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        len[i] = cnt;
        if (s[i] == '0')
            zero = true;
        else
            one = true;
        if (one && zero)
        {
            cnt++;
            one = false;
            zero = false;
        }
    }

    string ans = "";
    ll curr = n1; // msb bit starting with zero
    while (1)
    {
        ans.push_back(s[curr]);

        ll pos0 = next0[curr];
        ll pos1 = next1[curr];

        if(pos0==inf){
            ans.push_back('0');
            break;
        }

        if(pos1==inf){
            ans.push_back('1');
            break;
        }

        if (len[pos0] <= len[pos1])
        {
            curr = pos0;
        }
        else
            curr = pos1;
    }

    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}