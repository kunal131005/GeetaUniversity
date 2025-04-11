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
ListNode *Reverse(ListNode *head)
{

    // base case
    if(head == NULL or head->next == NULL){
        // agar ll empty hai or ll has atleast one node
        return head;
    }

    // recursive case
    // reverse the sublist which starts from the node which comes after the head node

    ListNode *revhead = Reverse(head->next);

    head->next->next = head;

    head->next = NULL;

    return revhead;
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
    head = Reverse(head);
    Print(head);
}