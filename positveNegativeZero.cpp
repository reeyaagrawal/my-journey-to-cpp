// Write a program to check whether a number is positive, negative, or zero.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(n>0){
    cout<<"number is positive.";
    }else if(n<0){
        cout<<"number is negative";
    }else{
        cout<<"number is zero.";
    }
    return 0;
}