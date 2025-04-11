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
void PrintLinkedList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode *getTail(ListNode *head)
{
    // is function ka kaam hai ki list mein jo last node hai uska address null hoga hume whi par apne add hone wale element ka addess daalna hai to us node ke null address ko find karenege list iterate karke har baar jab hum head se agle node ke element ke saath wale address ko check karenge to aise mein last mein aa karke loop break hoga or wo Null address wala heaad return kardega
    while (head->next != NULL)
    {
        head = head->next;
    }
    return head;
}
void InsertAtTail(ListNode *&head, int val)
{

    if (head == NULL)
    {
        InsertAtHead(head, val);
        return;
    }

    ListNode *n = new ListNode(val); // yahan par humne jo node add karna hai uski val ki help se ek node n banaya hai
    ListNode *tail = getTail(head);  // yahan par getTail(head which is pointing to the address of first element) function ki help se hum us node ko find karenege jisme NULL address store hai

    // find karke getTail() tail ko dedega and then hum niche wali statement ke through us null address wale node mein jo uper val ka node banaya hai uski help se null ki jagah us val ka address store kar denge

    tail->next = n;
}
int main()
{
    ListNode *head = NULL;

    // InsertAtHead(head, 50);
    // InsertAtHead(head, 40);
    // InsertAtHead(head, 30);
    // InsertAtHead(head, 20);
    // InsertAtHead(head, 10);

    // PrintLinkedList(head);

    InsertAtTail(head, 60);
    PrintLinkedList(head);
}