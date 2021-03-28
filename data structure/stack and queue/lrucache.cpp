#include<bits/stdc++.h>
using namespace std;
/*
implemented using doubly linked list and hash map
hash map is used for make search in o(1) time
and doubly linked list is used for adding and
removing elements in o(1) time.
*/
class LRUCache
{
private:
    list <pair<int, int>> cache;
    unordered_map <int, list<pair<int, int>>::iterator> mymap; // mymap is an iterartor

    void refresh(int key, int value){
        cache.erase(mymap[key]);
        cache.push_front(make_pair(key, value));
        mymap[key] = cache.begin();
    }
    int cap;
public:
    LRUCache(int cap)
    {
        // constructor for cache
        this->cap = cap;
    }
    int get(int key)
    {
        // this function should return value corresponding to key
        if(mymap.find(key)!=mymap.end())
        {
            refresh(key, mymap[key]->second);
            return (*mymap[key]).second;
        }
        return -1;
    }

    void _set(int key, int value)
    {
        // storing key, value pair
        if(mymap.find(key)!=mymap.end())
        {
            refresh(key, value);
        }
        else{
            cache.push_front(make_pair(key, value));
            mymap[key] = cache.begin();
            if(cache.size()>cap){
                mymap.erase(cache.back().first);
                cache.pop_back();
            }
        }
    }
};
int main()
{
    LRUCache ca(2);
    ca._set(1, 2);
    ca._set(2, 3);
    ca._set(1, 5);
    ca._set(4, 5);
    ca._set(6, 7);
    cout<<ca.get(4)<<endl;
    cout<<ca.get(1)<<endl;
}
