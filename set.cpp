#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int>s = {1,1,2,5,5,3,3,0,7,6};
    cout<<s.size()<<endl;

    s.insert(4);
    s.insert(8);
    s.erase(7);

    cout<<"Current Elements in set: ";
    for(auto i = s.begin(); i != s.end(); i++)
    // prints set elements using iterator
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    cout<<"Count of 5: "<<s.count(5)<<endl;

    if(s.find(7) != s.end())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    s.clear();

    if(s.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    return 0;
}