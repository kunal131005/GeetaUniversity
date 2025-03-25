#include<iostream>
using namespace std;
class LinkNode{
    public:

    int val;
    LinkNode* prev;
    LinkNode* next;

    LinkNode(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
int main(){
    
    LinkNode* node = new LinkNode(10);
    cout<<node->val<<endl<<node->prev<<endl<<node->next<<endl;
}