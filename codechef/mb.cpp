#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 3, 3};
    vector<int>::iterator ip;
    ip = unique(v.begin(), v.end(), v.end());
    v.resize(distance(v.begin(), ip));
    for (auto i : v)
        cout << i << " ";
}