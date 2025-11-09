// Write a program to find the sum of digits of a number using a loop.
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"enter number: ";
    cin>>num;
    while(num>0){
        int dig=num%10;
        num=num/10;
        sum+=dig;}
cout<<"sum= "<<sum;

    return 0;
}