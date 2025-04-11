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
ListNode *KthNode(ListNode *head, int k)
{
    if(head == NULL){
        // LL is empty
        return NULL;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    while (k--)
    {
        fast = fast->next;
    }
    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
int main()
{
    ListNode *head = NULL;

    insertAtHead(head, 60);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    int k = 2;
    ListNode *node = KthNode(head,k);
    cout<<node->val<<endl;
    
}