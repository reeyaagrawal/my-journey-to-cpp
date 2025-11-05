// Write a program to calculate the power of a number (a^b) using loops.
#include<iostream>
using namespace std;
int main(){
    int power=1;
    int a,b;
    cout<<"enter base: ";
    cin>>a;
    cout<<"enter exponent: ";
    cin>>b;
    cout<<a<<"^"<<b<<" is: ";
    for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<<power;
    return 0;
}