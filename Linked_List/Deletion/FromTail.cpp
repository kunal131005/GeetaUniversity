#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void InsertAtHead(ListNode *&head, int val)
{
    ListNode *node = new ListNode(val);
    node->next = head;
    head = node;
}
void Print(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void DeletionHead(ListNode *&head)
{
    if(head==NULL){
        // the linked list is empty
        return;
    }
    ListNode *n = head;  // head node ko ek naye node mein store kiya 
    head = head->next; // head node ki val address ko usse agle wale val ke saath wale address se change kiya taki deleton ke baad head node change ho paye matlab head ke baad jo node hai uske element ko head banana padega or phir head node mein next element ka address daal denge
    delete n;
}
void DeletionTail(ListNode *&head)
{
    if(head == NULL){
        // list is empty
        return ;
    }

    if(head->next == NULL){
        // list has only one node
        DeletionHead(head);
        return ;
    }
    ListNode *prev = NULL; // tail node se just pahle wale ke liye
    ListNode *tail = head;  // tail node ke liye start kar rahe hai head se taki iterate kar paye
    while (tail->next != NULL)
    {
        prev = tail;  // prev node ko tail denge
        tail = tail->next;  // tail ko tail se next wala
    }
    prev->next = NULL;  // loop break hone par prev mein null add kar denge taki ab yeh naya tail ban jaye
    delete tail;  // tail ko delete kar denge 
}
int main()
{
    ListNode *head = NULL;

    InsertAtHead(head, 50);
    InsertAtHead(head, 40);
    InsertAtHead(head, 30);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);

    Print(head);

    DeletionTail(head);
    Print(head);
}