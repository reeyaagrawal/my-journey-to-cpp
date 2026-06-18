#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    stack<int>s;
    vector<int>ans;
    int arr[]={3,1,0,8,6};
   int n=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);

        }else{
            
            ans.push_back(s.top());

        }
        s.push(arr[i]);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    
    return 0;
}