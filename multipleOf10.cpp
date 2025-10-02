// Write a program to check whether a number is a multiple of 10.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(n%10==0){
        cout<<n<<" is a multiple of 10";
    }else{
        cout<<n<<" is not a multiple of 10";
    }
    return 0;
}