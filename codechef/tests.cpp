#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 3, 7, 9, 12, 15};
    int l = 0;
    int r = 6;
    int m = 0;
    int s;
    cin >> s;
    while (l < r)
    {
        m = (r - l) / 2 + l;
        if (a[m] >= s)
            r = m;
        else
            l = m + 1;
    }
    if(l>5)
        cout<<"F\n";
    cout << a[l]<<endl<<l;
}