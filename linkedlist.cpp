#include <iostream>
#include <forward_list> // librray for singly linked lists
#include <list> // librray for doubly linked lists

using namespace std;

int main()
{
    // Implementation of Singly Linked List
    forward_list<int>l1 = {7, 2, 3, 4, 5}; // initializing linled list 1
    cout<<l1.front()<<endl;
   
    forward_list<char>l2;
    l2.assign({'A', 'B', 'D', 'E'}); // initializing linled list 2
    cout<<l2.front()<<endl;
    l2.push_front('S');

    l2.remove('B');

    cout<<"Current Elements in singly linked list: ";
    for(auto i = l2.begin(); i != l2.end(); i++)
    // prints elements using iterator
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    // Implementation of Doubly Linked List
    list<int>l3 = {2, 5, 9, 9, 11};
    cout<<l3.front()<<endl;
    cout<<l3.back()<<endl;
 
    cout<<"Elements in doubly linked list: ";
    for(auto i = l3.begin(); i != l3.end(); i++)
    // prints elements using iterator
        {
            cout<<(*i)<<" ";
        }
    cout<<endl;

    l3.push_front(15);
    l3.push_back(25);
    cout<<l3.front()<<endl;
    cout<<l3.back()<<endl;

    l3.remove(9); // removes all 9s from l3

    cout<<"Elements in doubly linked list: ";
    for(auto i = l3.begin(); i != l3.end(); i++)
    // prints elements using iterator
        {
            cout<<(*i)<<" ";
        }
    return 0;
}