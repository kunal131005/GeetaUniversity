#include<iostream>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void InsertAtHead(ListNode*& head,int val){
    ListNode* node = new ListNode(val);
    node->next=head;
    head=node;
}
void Print(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int Length(ListNode* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
int main(){
    ListNode* head = NULL;

    InsertAtHead(head,50);
    InsertAtHead(head,40);
    InsertAtHead(head,30);
    InsertAtHead(head,20);
    InsertAtHead(head,10);

    Print(head);

    cout<<Length(head)<<endl;
}