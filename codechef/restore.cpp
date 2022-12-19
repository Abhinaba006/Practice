#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int number)
{

    if (number == 2 || number == 3)
        return true;

    if (number % 2 == 0 || number % 3 == 0)
        return false;

    int divisor = 6;
    while (divisor * divisor - 2 * divisor + 1 <= number)
    {

        if (number % (divisor - 1) == 0)
            return false;

        if (number % (divisor + 1) == 0)
            return false;

        divisor += 6;

    }

    return true;

}

int NextPrime(int a)
{

    while (!IsPrime(++a))
    { }
    return a;

}
void solve()
{
    int n, c=3;
    cin>>n;
    vector <int> b(n, 1);
    for(int i=1;i<n;i++){
        b[i] = NextPrime(b[i-1]);
    }
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    b[0]=2;
    for(int i=1;i<n;i++){
        b[i] = NextPrime(b[i-1]);
    }
    for(int i=0;i<n;i++){
        if (i!=a[i]-1)
        b[i] = b[a[i]-1];
    }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    t=1;
    cin>>t;
    while(t--)
        solve();
}
