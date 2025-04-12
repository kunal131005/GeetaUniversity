#include <iostream>
#include <list>
using namespace std;
int main()
{

    // create an empty list

    list<int> l1;
    cout << "size => " << l1.size() << endl;

    // insert data at head
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    // insert data at tail
    l1.push_back(40);
    l1.push_back(50);

    cout << "size => " << l1.size() << endl;

    // access the element at the head
    cout << "head => " << l1.front() << endl;

    // access the element at the tail
    cout << "tail => " << l1.back() << endl;

    // iterate over the list using iterator
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // itertae over the list usig for each loop
    for(int x:l1){
        cout<<x<<" ";
    }
    cout<<endl;

    // remove data at the head
    l1.pop_front();

    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // remove data at the tail
    l1.pop_back();

    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // clear list
    l1.clear();
    cout << "size => " << distance(l1.begin(), l1.end()) << endl;

    // check if the list is empty
    cout<<"is list empty? "<<l1.empty()<<endl;

    // create a l using fill constructor

    list<int> l2(3,100);  // creates a L of size 3 all with values 100
    cout << "size => " << distance(l2.begin(), l2.end()) << endl;

    // iterate over the list using iterator
    for (auto it = l2.begin(), end = l2.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    list<int> l3(3);  // creates a L of size 3 all with values 0
    cout << "size => " << distance(l3.begin(), l3.end()) << endl;

    // iterate over the list using iterator
    for (auto it = l3.begin(), end = l3.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    list<int> l4 ={1,2,3,4,5};  // creates a L using initializer list
    cout << "size => " << distance(l4.begin(), l4.end()) << endl;

    // iterate over the list using iterator
    for (auto it = l4.begin(), end = l4.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}