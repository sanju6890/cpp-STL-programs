// Time Complexity of reverse() is O(N)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {2,5,7,3,1,0,9,8,4,6,5,7};

    // reverses the vector inplace
    reverse(v.begin(), v.end());

    for(auto i = v.begin(); i != v.end(); i++)
    // prints vector elements
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    return 0;
}