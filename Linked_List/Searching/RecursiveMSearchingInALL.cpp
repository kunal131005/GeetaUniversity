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
bool Search(ListNode *head, int key)
{
    // base case
    if (head == NULL)
    {
        return false;
    }

    //  recursive case
    if (head->val == key)
    {
        return true;
    }

    return Search(head->next, key);
}
int main()
{
    ListNode *head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    if (Search(head, 10))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}