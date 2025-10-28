// Write a program to reverse a number (e.g., 1234 → 4321).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int num=0;
    cout<<"original no is: "<<n<<endl;
    while(n!=0){
        int lastDigit=n%10;
        num=num*10+lastDigit;
        
        int nextDigit=n/10;
        n=nextDigit;
    }
  cout<<"reversed no is: "<<num;
    return 0;
}