#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {2,5,7,3,1,0,9,8,4,6,5,7};

    //sort in ascending order
    sort(v.begin(), v.end());

    if(binary_search(v.begin(), v.end(), 16))
        cout<<"Yes!";
    else
        cout<<"No";

    return 0;
}