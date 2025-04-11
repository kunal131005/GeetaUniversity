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
void insertAtHead(ListNode *&head, int val)
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
int Length(ListNode *head)
{

    // base case
    // jab humara head end mein aa jayega matlab ab sublist ki length 0 hai
    if (head == NULL)
    {
        return 0;
    }

    // recursive case

    // 1. recursively, compute the length of sublist which starts from the node which comes after the first node of the list
    int len = Length(head->next); // just next node ke address ko recursive funtion mein paas karenge
    return 1 + len;
}
int main()
{
    ListNode *head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    Print(head);

    cout << Length(head) << endl;
}