#define ll long long
#include <bits/stdc++.h>
using namespace std;
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int noBits(int n)
{
    int ans;
    while (n)
    {
        ans++;
        n >>= 1;
    }
    return ans;
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;
        ll a[n], tillMax;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll added = 1, t = 0;
        for (int i = 1; i < n; i++)
        {
            // cout<<t<<" "<<added<<" "<<i<<endl;
            if (a[i] < a[i - 1])
            {
                t++;
                a[i] += added;
                added <<= 1;
                if (a[i] < a[i - 1]) i--;
            }
        }
        if(t>0) t--;
        cout<<t<<endl;
    }
}