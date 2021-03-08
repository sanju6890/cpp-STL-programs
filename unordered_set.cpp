/*
-- 'unordered_set' is very much similar to 'set' in its implimentation.
Main difference btw set and unordered_set:
1. 'set' is implimented using 'Self Balanced BST like Red-Black-Tree'
    while 'unordered_set' is implimented using 'Hash set' data structure.
2. Time complexity of insertion, deletion, & searching in 'set' is O(logN)
    but time complexity of such operations in 'unordered_set' is O(1).
3. Its output is not in sorted order.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int>s = {1,1,5,5,3,2,2,4};
    
    cout<<"Size of unordered_set: "<<s.size()<<endl;

    s.insert(8);
    s.insert(7);
    s.insert(6);

    cout<<"Count of 5: "<<s.count(5)<<endl;
   
    if(s.find(5) != s.end())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    s.erase(5);

    cout<<"Current Elements in unordered set: ";
    for(auto i = s.begin(); i != s.end(); i++)
    // prints elements using iterator
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    s.clear();

    if(s.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}