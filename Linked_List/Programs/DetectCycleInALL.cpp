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
bool CycleDetect(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL and fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast)return true;
    }
    return false;
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

    CycleDetect(head) ? cout<<"True"<<endl : cout<<"False"<<endl; 
}