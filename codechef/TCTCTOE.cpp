#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
bool winORloose(char table[][3], char ch)
{
    for (int i = 0; i < 3; i++)
        if (table[i][0] == ch && table[i][1] == ch && table[i][2] == ch)
            return true;

    for (int i = 0; i < 3; i++)
        if (table[0][i] == ch && table[1][i] == ch && table[2][i] == ch)
            return true;

    if (table[0][0] == ch && table[1][1] == ch && table[2][2] == ch)
        return true;

    if (table[0][2] == ch && table[1][1] == ch && table[2][0] == ch)
        return true;

    return false;
}
int solve()
{
    char s[3][3];
    cin >> s[0];
    cin >> s[1];
    cin >> s[2];
    int noX = 0, noO = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i][j] == 'X')
                noX++;
            if (s[i][j] == 'O')
                noO++;
        }
    }
    if(noX<noO)
        return 3;
    if(noX>noO+1)
        return 3;
    bool X = winORloose(s, 'X');
    bool O = winORloose(s, 'O');

    if(X && O)
        return 3;
    if (X && noX==noO)
        return 3;
    if(O && noX>noO)
        return 3;
    if(X || O)
        return 1;
    if(noX+noO==9)
        return 1;
    return 2;
}   
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        cout<<solve()<<endl;
    }
}