// Write a program to print all prime numbers between 1 and 100
#include<iostream>
using namespace std;
int main(){
    
    for(int i=2;i<=100;i++){
        bool isprime=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime)
        cout<<i<<" ";
    }
    // cout<<isprime;
    return 0;
}