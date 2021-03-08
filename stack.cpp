#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int>s;
    s.push(5);
    s.push(7);
    s.pop();

    cout<<s.top()<<endl;

    s.push(9);
    s.push(15);

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    s.clear(); // clears the stack

    if(s.empty()) // checks if stack is empty or not
        cout<<"Yes!";
    else 
        cout<<"No";
    return 0;
}