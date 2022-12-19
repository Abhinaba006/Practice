#include <bits/stdc++.h>
using namespace std;
int dayofweek(int d, int m, int y)
{
    static vector<string> days;
    days.push_back("Sun");
    days.push_back("Mon");
    days.push_back("Tue");
    days.push_back("Wed");
    days.push_back("Thu");
    days.push_back("Fri");
    days.push_back("Sat");
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    y -= m < 3;
    int temp = (y + y / 4 - y / 100 +
                y / 400 + t[m - 1] + d) %
               7;
    // return days[temp]; //uncomment this line to get the day of the week
    return temp;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
vector<int> allPrimes(int n)
{
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            ans.push_back(i);
    }
    return ans;
}
bool isLeap(int y)
{
    if (y % 400 == 0)
        return true;
    if (y % 100 == 0)
        return false;
    if (y % 4 == 0)
        return true;
    return false;
}
int daysOfaYear(int y)
{
    if (isLeap(y))
        return 366;
    return 365;
}
int dateDifference(int d1, int d2, int m1, int m2, int y1, int y2)
{
    if (y1 == y2)
    {
        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};
        long date1 = 0;
        if (isLeap(y1))
            days[1] = 29;
        for (int i = 0; i < m1 - 1; i++)
        {
            date1 += days[i];
        }
        date1 += d1;
        long date2 = 0;
        if (isLeap(y2))
            days[1] = 29;
        for (int i = 0; i < m2 - 1; i++)
        {
            date2 += days[i];
        }
        date2 += d2;
        return abs(date2 - date1);
    }
    else
    {
        // cout << "year is different" << endl;
        // cout << dateDifference(d1, 31, m1, 12, y1, y1) << " " << dateDifference(1, d2, m2, 1, y2, y2) << endl;
        int t = 0;
        if (abs(y1 - y2) == 2)
        {
            t = daysOfaYear(y1 + 1);
        }
        return dateDifference(d1, 31, m1, 12, y1, y1) + dateDifference(1, d2, 1, m2, y2, y2) + t;
    }
}
vector<int> addDaystoDate(int d, int m, int y, int days)
{
    int daysinM[] = {31, 28, 31, 30, 31, 30,
                     31, 31, 30, 31, 30, 31};
    if (isLeap(y))
        daysinM[1] = 29;
    int date = d;
    date += days;
    while (date > daysinM[m - 1])
    {
        date -= daysinM[m - 1];
        m++;
        if (date == 0)
            date = 1;
        if (m > 12)
        {
            m = 1;
            y++;
        }
    }
    // cout << y1 << " - " << m1 << " " << date << endl;
    return {date, m, y};
}
int main()
{
    // cout<<dateDifference(30, 10, 11, 2, 2019, 2020);
    // vector<int> ans = addDaystoDate(31, 12, 2019, 1);
    // cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    int n = 20201203;
    n=20210101;

    // return 0;
    // map<string, int> mp;
    vector<int> hash(7, 0);
    // cin >> n;
    // string day;
    // cin >> day;
    // int after;
    // cin >> after;
    int d = n % 100;
    n /= 100;
    int month = n % 100;
    n /= 100;
    int year = n;
    cout << "Input date is " << d << "/" << month << "/" << year << endl;
    int primeMonths[] = {2, 3, 5, 7, 11};
    vector<int> prime = allPrimes(3650000);
    int flag = 1;
    for (auto &x : prime)
    {

        vector<int> temp = addDaystoDate(d, month, year, x);
        // cout<<x<<" "<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<" day "<<dayofweek(temp[0], temp[1], temp[2])<<endl;
        // cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
        if (isPrime(temp[1]))
        {
            // if ( dayofweek(temp[0], temp[1], temp[2]) == day)
            // {
            //     flag = 0;
            //     if(x<=after){
            //         cout<<"Yes "<<x;
            //         return 0;
            //     }else{
            //         cout<<"No "<<x;
            //         return 0;
            //     }
            // }}
            // cout << dayofweek(temp[0], temp[1], temp[2]) << endl;
            // if ( dayofweek(temp[0], temp[1], temp[2]) == 0)
            hash[dayofweek(temp[0], temp[1], temp[2])]++;
        }
    }
    cout << "week" << endl;
    for (auto x : hash)
    {
        cout << x << " ";
    }
    return 0;
}