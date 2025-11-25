// Write a program to print each character of a string on a new line.
#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"input string:";
    cin.getline(str,100);
   
    int i=0;
    while(str[i]!='\0'){
       cout<<str[i]<<endl;
       i++;
    }
    return 0;
}