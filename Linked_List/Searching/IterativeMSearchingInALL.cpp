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
bool Search(ListNode *head, int key)
{
    while (head != NULL)
    {
        if (head->val == key)
            return true;
        head = head->next;
    }
    return false;
}
int main()
{
    ListNode *head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    if (Search(head, 100))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}