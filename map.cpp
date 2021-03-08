/*
-- 'unordered_map' is very much similar to 'map' in its implimentation.
Main difference btw map and unordered_map:
1. 'map' is implimented using 'Self Balanced BST like Red-Black-Tree'
    while 'unordered_map' is implimented using 'Hash table' data structure.
2. Time complexity of insertion, deletion, & searching in 'map' is O(logN)
    but time complexity of such operations in 'unordered_map' is O(1).
3. Its output is not in sorted order.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, char>mp; // defines map FOR multimap just replace 'map' keyword with 'multimap'
    mp.insert(make_pair(1,'A'));
    mp.insert(make_pair(3,'C'));
    mp.insert(make_pair(2,'B'));
    mp.insert(make_pair(5,'E'));
    mp.insert(make_pair(4,'D'));

    cout<<mp.size()<<endl;

    mp[6]='F';

    cout<<"Current key->Value pairs in map: "<<endl;
    for(auto i = mp.begin(); i != mp.end(); i++)
    // prints using iterator
        {
            cout<<"("<<i->first<<", "<<i->second<<")"<<endl;
        }
    cout<<endl;

    // count frequency of each elements in a vector
    vector<int>v = {1,2,2,4,6,6,7,7,8,8};
    map<int, int>fq;

    for(int i =0; i < v.size(); i++)
        {
            fq[v[i]]++;
        }
    for(auto i = fq.begin(); i != fq.end(); i++)
    // prints using iterator
        {
            cout<<"("<<i->first<<", "<<i->second<<")"<<endl;
        }
    cout<<endl;

    mp.clear();

    if(mp.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}