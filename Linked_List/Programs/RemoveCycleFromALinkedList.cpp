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
void Print(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void *RemoveCycle(ListNode *&head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (true)
    {
        fast = fast->next->next;
        slow = slow -> next;

        if(slow == fast){
            break;
        }
    }

    slow = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    fast -> next = NULL;
}
int main()
{
    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    head->next->next->next->next->next = new ListNode(60);
    head->next->next->next->next->next->next = head->next->next;

    RemoveCycle(head);
    Print(head);
}