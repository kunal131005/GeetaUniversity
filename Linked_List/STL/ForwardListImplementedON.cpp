#include <iostream>
using namespace std;
template<typename T>  // for generic code
class ListNode
{
public:
    T val;
    ListNode<T> *next;

    ListNode(T val)
    {
        this->val = val;
        this->next = NULL;
    }
};
template<typename T>
class forward_list
{
private:
    ListNode<T> *head;
    int count;

public:
    forward_list()
    {
        head = NULL;
        count = 0;
    }

    // insertion at head
    void push_front(T val)
    {
        ListNode<T> *node = new ListNode<T>(val);
        node->next = head;
        head = node;

        count++;
    }

    // delete at head
    void pop_front()
    {
        if(head == NULL){
            // ll is empty
            return ;
        }

        ListNode<T>* temp = head;
        head = head->next;
        delete temp;

        count--;
    }

    // size of LL
    int size()
    {
        return count;
    }

    // tells if the ll is empty or not
    bool empty()
    {
        return count!=0;
    }

    // returns the head node val
    T front()
    {
        return head->val;
    }

    // iterate over the llist
    void traverse()
    {
        ListNode<T>* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    forward_list<int> l1;

    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    cout << "head->val : " << l1.front() << endl;

    l1.traverse();

    cout << "size : " << l1.size() << endl;

    l1.pop_front();
    l1.traverse();
    l1.pop_front();
    l1.traverse();

    l1.empty()?cout<<"true"<<endl:cout<<"false"<<endl;
}