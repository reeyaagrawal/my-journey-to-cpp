// Write a program to check whether a person is eligible for a driving license (age ≥ 18 and has passed test).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter age: ";
    cin>>n;
    if(n>=18){
        cout<<"person is eligible for a driving license";
    }else{
         cout<<"person is not eligible for a driving license";
    }
    return 0;
}