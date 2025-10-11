#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter age:";
    cin>>n;
    if(n>=18){
        cout<<"Eligible to vote";
    }else {
        cout<<"Not eligible to vote";
    }
    return 0;
}