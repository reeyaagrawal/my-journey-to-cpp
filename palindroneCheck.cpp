//Write a program to check whether a number is a palindrome (e.g., 121 → Palindrome).
#include<iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"enter number: ";
    cin>>n;
    int num=0;
     int ori=n;
    while(n!=0){
        int lastDigit=n%10;
        num=num*10+lastDigit;
        
        int nextDigit=n/10;
        n=nextDigit;
    }
    if(num==ori){
        cout<<num<<" is palindrone.";
    }else{
        cout<<num<<" is not palindrone.";
    }
    return 0;
}