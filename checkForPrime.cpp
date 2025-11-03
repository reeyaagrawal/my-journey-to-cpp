// Write a program to check whether a number is prime.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number: ";
cin>>n;
bool isprime=1;
if(n<=1){
    cout<<"non prime";
}else{
    for(int i=1;i<=n;i++){
        if(n%i==0){
         isprime= 0;
         break;
        }
    
    }
}

if(isprime){
    cout<<"prime";
}
cout<<"non-prime";
    return 0;
}