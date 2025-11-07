// Write a program to print the Fibonacci series up to a given number  n .
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number till where u want fibonacci: ";
    cin>>n;
    int a=0,b=1;
    while(a<=n){
        cout<<a<<" ";
        int temp=a;
        a=b;
        b=a+temp;
        // cout<<a;
        // if(a>=n)
        // break;
    }
    return 0;
}