#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;
int main()
{

    // create an empty forward_list ( or we can say its an object)

    forward_list<int> l1;

    // length of the list
    cout << "size => " << distance(l1.begin(), l1.end()) << endl;

    // insert data at the head
    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    cout << "size => " << distance(l1.begin(), l1.end()) << endl;

    // access the element at the head
    cout << "head => " << l1.front() << endl;

    // iterate over he forward_list using iterator
    for (auto it = l1.begin(), end = l1.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // iterate over he forward_list using for-each loop
    for(int x : l1){
        cout<<x<<" ";
    }
    cout<<endl;

    // remove data at the head
    l1.pop_front();
    l1.pop_front();
    cout << "size => " << distance(l1.begin(), l1.end()) << endl;

    // iterate over he forward_list using iterator
    for (auto it = l1.begin(), end = l1.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // clear forward list
    l1.clear();
    cout << "size => " << distance(l1.begin(), l1.end()) << endl;

    // check if the list is empty
    cout<<"is list empty? "<<l1.empty()<<endl;

    // create a ll using fill constructor

    forward_list<int> l2(3,100);  // creates a forward LL of size 3 all with values 100
    cout << "size => " << distance(l2.begin(), l2.end()) << endl;

    // iterate over the forward_list using iterator
    for (auto it = l2.begin(), end = l2.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    forward_list<int> l3(3);  // creates a forward LL of size 3 all with values 0
    cout << "size => " << distance(l3.begin(), l3.end()) << endl;

    // iterate over the forward_list using iterator
    for (auto it = l3.begin(), end = l3.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    forward_list<int> l4 ={1,2,3,4,5};  // creates a forward LL using initializer list
    cout << "size => " << distance(l4.begin(), l4.end()) << endl;

    // iterate over the forward_list using iterator
    for (auto it = l4.begin(), end = l4.end(); it != end; it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}