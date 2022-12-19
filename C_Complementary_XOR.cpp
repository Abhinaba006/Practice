#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string days[7] = {"Su", "m", "Tu", "W", "Th", "F", "Sa"};
    map<string, vector<int>> ans;
    if (s == "Sunday")
    {
        int i=1;
        while(i<31){
            for(int j=0;j<7;j++){
                ans[days[j]].push_back(i++);
            }
        }
    }
    if (s == "Monday")
    {
        int i=1;
        while(i<32){
            for(int j=0;j<7;j++){
                if(i<2) {
                    ans[days[j]].push_back(-1);
                    i++;
                }
                else ans[days[j]].push_back(i++-1);
            }
        }
    }
    if (s == "Tuesday")
    {
        int i=1;
        while(i<33){
            for(int j=0;j<7;j++){
                if(i<3) {
                    ans[days[j]].push_back(-1);
                    i++;
                }
                else ans[days[j]].push_back(i++-2);
            }
        }
    }
    if (s == "Wednesday")
    {
        int i=1;
        while(i<34){
            for(int j=0;j<7;j++){
                if(i<4) {
                    ans[days[j]].push_back(-1);
                    i++;
                }
                else ans[days[j]].push_back(i++-3);
            }
        }
    }
    if (s == "Thursday")
    {
        int i=1;
        while(i<35){
            for(int j=0;j<7;j++){
                if(i<5) {
                    ans[days[j]].push_back(-1);
                    i++;
                }
                else ans[days[j]].push_back(i++-4);
            }
        }
    }
    if (s == "Friday")
    {
        int i=1;
        while(i<36){
            for(int j=0;j<7;j++){
                if(i<6) {
                    ans[days[j]].push_back(-1);
                    i++;
                }
                else ans[days[j]].push_back(i++-5);
            }
        }
    }
    if (s == "Saturday")
    {
        int i=1;
        while(i<37){
            for(int j=0;j<7;j++){
                if(i<7) {
                    ans[days[j]].push_back(-1);
                    i++;
                }
                else ans[days[j]].push_back(i++-6);
            }
        }
    }
    for (auto x : days)
    {
        cout << x << " ";
        for (auto y : ans[x])
            if (y == -1)
                cout << " ";
            else
                cout << y << " ";
        cout << endl;
    }
}