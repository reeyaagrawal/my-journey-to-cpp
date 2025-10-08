// Write a program to check whether a number is within the range 1–100.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(n>1&&n<100){
        cout<<n<<" is within the range 1-100";
    }else{
         cout<<n<<" is not within the range 1-100";
    }
    return 0;
}