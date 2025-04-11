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
void PrintList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode *getNode(ListNode *head, int index)
{

    // list ko simply iterate kar rahe hai index tak ek k helper ke saath
    int k = 1;
    while (k <= index and head != NULL)
    {
        head = head->next;
        k++;
    }
    return head;
}
void InsertAtIndex(ListNode *&head, int val, int index)
{
    if (head == NULL or index == 0)
    {
        InsertAtHead(head, val);
        return;
    }
    ListNode *n = new ListNode(val);           // ek naya node jis val ko add karna hai uske liye
    ListNode *prev = getNode(head, index - 1); // jahan par node ko add karna hai usse just pahle jo index $(i-1) hai uska address change karne ke liye hum us node ko getNode() ki help se find karenge

    if (prev == NULL)
    {
        // index is invalid
        return;
    }
    n->next = prev->next; // jo naya node banaya hai usme address store karenge prev node mein jo address store hai uska
    prev->next = n;       // prev node mein address store karenge naye wale node ka
}
int main()
{
    ListNode *head = NULL;

    InsertAtHead(head, 50);
    InsertAtHead(head, 40);
    InsertAtHead(head, 30);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);

    PrintList(head);

    InsertAtIndex(head, 25, 0);

    PrintList(head);
}