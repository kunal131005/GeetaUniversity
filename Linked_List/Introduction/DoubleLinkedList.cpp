#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *prev;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
int main()
{

    ListNode *node = new ListNode(10);
    cout << node->val << endl
         << node->prev << endl
         << node->next << endl;
}