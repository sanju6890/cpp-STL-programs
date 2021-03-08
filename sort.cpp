/*
Using this inbuilt sort function we can sort:
1. array
2. list
3. vector
either in ascending order or descending order.
-> Time complexity of sort() is O(N.logN)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {2,5,7,3,1,0,9,8,4,6,5,7};

    //sort in ascending order
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    // prints vector elements
        {
            cout<<v[i]<<" ";
        }
    cout<<endl;

    //sort in descending order
    sort(v.begin(), v.end(), greater<int>());

     for(auto i = v.begin(); i != v.end(); i++)
    // prints vector elements
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    return 0;
}