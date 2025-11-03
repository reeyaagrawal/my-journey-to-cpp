// Write a program to generate the first  n  terms of the Fibonacci series.
#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    cout<<"enter no of terms: ";
    cin>>n;
    cout<<"first"<<  n  <<"terms of the Fibonacci series: ";
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int temp=a;
        a=b;
        b=a+temp;
    }
    return 0;
}