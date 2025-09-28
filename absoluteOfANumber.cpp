// Write a program to print the absolute value of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(n>0){
        cout<<"absolute of "<<n<<" is: "<<n;
    }else{
         cout<<"absolute of "<<n<<" is: "<<-n;
    }
    return 0;
}