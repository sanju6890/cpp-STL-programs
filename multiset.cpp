#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset<int>s = {1,1,2,5,5,5,3,3,0,7,6};
    cout<<s.size()<<endl;

    cout<<"Current Elements in set: ";
    for(auto i = s.begin(); i != s.end(); i++)
    // prints multiset elements using iterator
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    cout<<"Count of 5: "<<s.count(5)<<endl;

    s.erase(7);

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