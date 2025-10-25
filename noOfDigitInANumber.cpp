// Write a program to count the number of digits in a given number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int count=0;
    while(n!=0){
        int lastDigit=n%10;
        count++;
        int nextDigit=n/10;
        n=nextDigit;
    }
  cout<<"no of digit in number is: "<<count;
    return 0;
}