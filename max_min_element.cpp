#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v = {2,5,7,3,1,0,9,8,4,6,5,7};

    cout<<"Max Element: "<<*max_element(v.begin(), v.end())<<endl;
    cout<<"Max Element: "<<*min_element(v.begin(), v.end())<<endl;

    return 0;
}