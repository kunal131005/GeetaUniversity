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
// Type 1
// void insertAtHead(ListNode *&head, int val)  // point hai yahan par reference send karna hai copy nhi taki change aage bhi reflect ho
// {
//     ListNode *node = new ListNode(val);
//     node->next = head;
//     head = node;
// }

//  Type 2
ListNode* insertAtHead(ListNode *head, int val) 
{
    ListNode *node = new ListNode(val);
    node->next = head;
    head = node;

    return head;
}
void printLinkedList(ListNode *head)  // yahan par normally send karna hai kyunki function ki body mein jo head hai usme koi changes nhi chahiye to iske liye value send karni hai reference(isse head null ho jayega or kuch bhi print nhi hoga) nhi 
{
    while (head != NULL)
    {
        cout << head->val << " "; // pahle to head mein jo value hai use hi print kar do baad mein head ko derefrence kar do jo element print hua usi ke next address ke saath yeh print tab tak karna hai jab tak hum linklist ke end tak (jahan last element ke saath NULL address hai) na iterate kar le isliye while loop ka use kiya hai
        head = head->next;
    }
    cout << endl;
}
int main()
{
    ListNode *head = NULL;

    //  Type 1
    // insertAtHead(head, 50);
    // insertAtHead(head, 40);
    // insertAtHead(head, 30);
    // insertAtHead(head, 20);
    // insertAtHead(head, 10);

    //  Type 2
    head=insertAtHead(head, 50);
    head=insertAtHead(head, 40);
    head=insertAtHead(head, 30);
    head=insertAtHead(head, 20);
    head=insertAtHead(head, 10);

    printLinkedList(head);
}