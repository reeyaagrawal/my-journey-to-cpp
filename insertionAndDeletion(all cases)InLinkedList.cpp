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
    void pop_front(){
        if(head==NULL){
            cout<<"Nothing can be popped as linked list is empty! \n";
            return;
        }else{
            node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
    void pop_back() {
        if(head==NULL){
            cout<<"Nothing can be popped as linked list is empty!\n ";
            return;
        }else{
            node*temp=head;
            while(temp->next != tail){
                temp=temp->next;
            }
            temp->next==NULL;
            delete tail;
            tail=temp;
        }
    }
    void insert(int val, int pos){
        node*newnode=new node(val);
        node*temp=head;
        if(pos<0){
            cout<<"insert valid position! \n";
            return;
        }else if(pos==0){
            push_front (val);
        }else{
            for(int j=0;j<pos-1;j++){
                if(temp==NULL){
                    cout<<"invalid position\n";
                    return ;
                }
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
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

ll.insert(5, 2);
ll.insert(6, 8);


    return 0;
}