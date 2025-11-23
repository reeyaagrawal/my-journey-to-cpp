// Write a program to input a string and display it.
#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"input string:";
    cin.getline(str,100);
    cout<<"string:"<<str;
    return 0;
}