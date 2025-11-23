// Write a program to input a string and print its length (without using strlen()).
#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"input string:";
    cin.getline(str,100);
    int len=0;
    int i=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    cout<<"length:"<<len;
    return 0;
}