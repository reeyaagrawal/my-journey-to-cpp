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
    cout<<endl;
    return 0;
}