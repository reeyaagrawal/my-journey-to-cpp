// Write a program to find the greatest common divisor (GCD) of two numbers using a loop.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number: ";
    cin>>a>>b;
    while(b!=0){
        int temp=b;
     
        b=a%b;
        a=temp;
    }
    cout<<"gcd= "<<a;
    return 0;
}