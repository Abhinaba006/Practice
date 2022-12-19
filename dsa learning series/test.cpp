#include <iostream>
#include <unordered_set>
using namespace std;
 
int main()
{
    std::unordered_set<int> s = { 1, 2, 3, 4, 5 };
    int key = 5;
 
    if (s.find(key) != s.end())
        std::cout << "Element is present in the set" << '\n';
    else
        std::cout << "Element not found" << '\n';
 
    return 0;
}