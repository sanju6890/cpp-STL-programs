#include <iostream>
#include <queue> // library for queue

using namespace std;

int main()
{
    queue<int>q;

    q.push(3); // enqueue operation
    q.push(2);
    q.push(7);
    q.push(9);
    
    cout<<q.size()<<endl; // gives current size of queue
    cout<<q.front()<<endl; // gives front element of queue
    q.pop(); // dequeue operation
    cout<<q.front()<<endl;
    cout<<q.back()<<endl; // gives last element of queue

    q.clear(); // clears the queue

    if(q.empty()) // checks if queue is empty or not
        cout<<"Yes!";
    else 
        cout<<"No";

    return 0;
}