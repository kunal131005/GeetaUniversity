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
ListNode* RemoveDuplicate(ListNode*& head){

    ListNode* prev = head;
    ListNode* curr = head -> next;
    while(curr!=NULL){
        if(curr->val!=prev->val){
            // track the curr
            prev->next=curr;
            prev=curr;
        }
        curr=curr->next;
    }
    return head;
}
int main()
{
    ListNode *head = NULL;

    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtHead(head, 10);

    head = RemoveDuplicate(head);
    Print(head);
}