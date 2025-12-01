// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
    }
};
class list{
    node* head;
    node* tail;
    public:
    list() {
        head=tail=NULL;
    }
    void push_front(int val) {
        node* newnode=new node ( val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    void push_back(int val) {
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else {
            tail->next=newnode;
            tail=newnode;
        }
    }
    
};
int main() {
list ll;
ll.pop_front();
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.push_back (5);
ll.pop_front ();
//ll.pop_back ();
ll.insert(5, 2);
ll.insert(6, 8);
cout<<ll.search(25)<<endl;
ll. display();

    return 0;
}