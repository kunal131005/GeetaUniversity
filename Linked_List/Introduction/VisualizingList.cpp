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

    void print()
    {
        cout << this->val << endl
             << this->next << endl;
    }
};
int main()
{
    ListNode *node = new ListNode(10);
    node->print();

    cout<<(*node).val<<endl;
}