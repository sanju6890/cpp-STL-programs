#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<char, int> p1('A', 68); // initializing using constructor
    pair<int, char> p2 = p1; // initializing using copy constructor
    pair<char, int> p3 = make_pair('B', 11); // initializing using pair class method
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;

    // pair array
    pair<char, int> p[5];
    for(int i = 0; i < 5; i++)
        {
            cout<<"Enter First & Second value of Pair:"<<endl;
            cin>>p[i].first>>p[i].second;
        }

    for(int i = 0; i < 5; i++)
        {
            cout<<"Pair-"<<i+1<<endl;
            cout<<"("<<p[i].first<<", "<<p[i].second<<")"<<endl;
        }
    return 0;
}