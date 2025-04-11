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
int main()
{
    ListNode *head = NULL;

    InsertAtHead(head, 50);
    InsertAtHead(head, 40);
    InsertAtHead(head, 30);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);

    Print(head);

    DeletionHead(head);
    Print(head);
}