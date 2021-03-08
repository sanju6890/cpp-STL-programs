#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v1 = {2,5,7,3,1,0,9,8,4,6,5,7};
    vector<int>v2 = {12,15,17,13,11,10,14,16};
    int N = v1.size() + v2.size();
    vector<int>v3(N);

    // reverses the vector inplace
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    cout<<"Size of merged vector = "<<v3.size()<<endl;

    cout<<"Elements in merged vector: "<<endl;

    for(auto i = v3.begin(); i != v3.end(); i++)
    // prints merged-vector elements
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    return 0;
}