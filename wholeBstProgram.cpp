// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
class bst{
    public:
  node*root;
  
  bst(){
      root=NULL;
  }
  node*insert(node*curr,int key){
      if(curr==NULL)
          return new node(key);
      if(key<curr->data)
        curr->left=insert(curr->left,key);
    if(key>curr->data)
        curr->right=insert(curr->right,key);
   return curr;   
  }
   node*findmin(node*curr){
       while(curr->left !=NULL){
           curr=curr->left;
       }
       return curr;
   }
  node*deleteNode(node*curr,int key){
      if(curr==NULL) return curr;
      if(key<curr->data)
        curr->left=deleteNode(curr->left,key);
    else if(key>curr->data)
        curr->right=deleteNode(curr->right,key);
        else{
            if(curr->left==NULL){
                node*temp=curr->right;
                delete curr;
                return temp;
            }else if(curr->right==NULL){
                node*temp=curr->left;
                delete curr;
                return temp;
            }
            node*temp=findmin(curr->right);
            curr->data=temp->data;
            curr->right=deleteNode(curr->right,temp->data);
        }
      return curr;
  }
  void inorder(node*curr){
      if(curr==NULL) return;
      inorder(curr->left);
      cout<<curr->data<<" ";
      inorder(curr->right);
  }
};
int main() {
    bst t;
    t.root=t.insert(t.root,10);
    t.root=t.insert(t.root,20);
    t.root=t.insert(t.root,30);
    t.root=t.insert(t.root,40);
    t.root=t.insert(t.root,50);
    t.root=t.insert(t.root,60);
    t.root=t.insert(t.root,70);
    t.inorder(t.root);
    cout<<endl;
     t.root=t.deleteNode(t.root,50);
     t.inorder(t.root);
    return 0;
}