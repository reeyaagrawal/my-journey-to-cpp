#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter first no: ";
    cin>>n1;
    int n2;
    cout<<"enter second no: ";
    cin>>n2;
     int n3;
    cout<<"enter third no: ";
    cin>>n3;
    if(n1>n2&&n1>n3){
        cout<<n1<<" is  greatest  ";
    }else if(n2>n1&&n2>n3){
        cout<<n2<<" is  greatest ";
    }else if(n3>n1&&n3>n2){
        cout<<n3<<" is  greatest ";
    }
    return 0;
}