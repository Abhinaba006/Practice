#include <bits/stdc++.h>
using namespace std;
void split(string s, vector<string> &v)
{
    int i = 0, j = 0;
    int n = s.length();
    while (i < n)
    {
        if (s[i] == ' ')
        {
            v.push_back(s.substr(j, i - j));
            j = i + 1;
        }
        i++;
    }
    v.push_back(s.substr(j, i - j));
}
unsigned long long val(char a){
    if(a>=0 && a<=9)
        return a-'0';
    if(a>='A' && a<='Z'){
        return a -'A'+10;
    }
    else return a-'a'+36;
}
int main()
{
    string temp;
    getline(cin, temp);
    vector<string> v;
    split(temp, v);
    int n = v.size();
    vector<unsigned long long> values;
    for (auto &elem : v)
    {
        unsigned long long sum = 0;
        if (elem.size() == 1)
            sum = val(elem[0]);
        else{
            if(elem[1]=='0'){
                sum = val(elem[0]) * 2 + val(elem[1]);
            }else{
                sum = val(elem[0]) * (val(elem[1]) + 1) + val(elem[1]);
            }
        }
        values.push_back(sum);
    }
    // for(int i=0;i<n;i++){
    //     cout<<values[i]<<" ";
    // }
    // cout<<endl;
    if(values.size()==1){
        cout<<values[0]<<endl;
        return 0;
    }
    unsigned long long high = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(values[i]!=values[j] && i!=j && values[i]!=0 && values[j]!=0) high = max(high, __gcd(values[i], values[j]));
        }
    }
    cout<<high;
}