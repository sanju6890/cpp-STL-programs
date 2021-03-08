#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>v1; // vector declaration 1
    // gives current size of vector
    cout<<v1.size()<<endl;
    // inserts an element at the end of vector
    v1.push_back(5); 
    cout<<v1.size()<<endl;
    v1.push_back(11);
    cout<<v1.size()<<endl;
    v1.push_back(7);
    cout<<v1.size()<<endl;
    v1.push_back(9);
    cout<<v1.size()<<endl;

    for(int i = 0; i < v1.size(); i++)
    // prints vector elements using simple for loop
        {
            cout<<v1[i]<<" ";
        }
    cout<<endl;

    // taking user inputs into vector
    int N;
    cout<<"Enter no. of elements you want to store in vector: ";
    cin>>N;
    vector<char>v2(N,'A'); // vector declaration 2
    cout<<v2.size()<<endl;
    
    cout<<"Current Elements in Vector: ";
    for(auto i = v2.begin(); i != v2.end(); i++)
    // prints vector elements using iterator
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;
    
    cout<<"Enter Vector Elements: ";
    for(int i =0; i < N; i++)
        {
            cin>>v2[i];
        }
    cout<<"Current Elements in Vector: ";
    for(auto i = v2.begin(); i != v2.end(); i++)
    // prints vector elements using iterator
        {
            cout<<(*i)<<" ";
        }  
    return 0;
}
