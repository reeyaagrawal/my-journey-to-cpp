#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter first no: ";
    cin>>n1;
    int n2;
    cout<<"enter second no: ";
    cin>>n2;
    if(n1>n2){
        cout<<n1<<" is a greater than "<<n2;
    }else{
        cout<<n2<<" is a greater than "<<n2;
    }
    return 0;
}