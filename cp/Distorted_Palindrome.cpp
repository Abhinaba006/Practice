#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void minMovesToMakePalindrome()
{
    string s;
    cin >> s;

    map<char, int> h;
    for (char c : s)
        h[c]++;
    int p = 0;
    for (auto x : h)
    {
        p += x.second % 2;
        if (p == 2)
        {
            cout << "Impossible" << endl;
            return;
        }
    }
    int ans = 0;
    while (s.size())
    {
        int i = s.find(s.back());
        if (i == s.size() - 1)
            ans += s.size() / 2;
        else
            ans += i, s.erase(i, 1);
        s.pop_back();
    }
    cout<< ans<<endl;
}
int main()
{
    // your code goes here
    int t=1;
    while (t--)
        minMovesToMakePalindrome();
    return 0;
}
