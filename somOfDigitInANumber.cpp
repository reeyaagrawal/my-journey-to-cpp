// Write a program to calculate the sum of digits of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int sum=0;
    while(n!=0){
        int lastDigit=n%10;
        sum+=lastDigit;
        int nextDigit=n/10;
        n=nextDigit;
    }
  cout<<"sum of digit of a number is: "<<sum;
    return 0;
}