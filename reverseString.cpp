//Write a program to reverse a string (without using library functions).
#include <iostream>
using namespace std;
int main() {
   char str[50];
   cout<<"enter string:";
   cin.getline(str,50);
   char strcpy[50];
   int len=0;
   for(int i=0;str[i]!='\0';i++){
       len++;
    }
    for(int i=0;i<len;i++){
        strcpy[i]=str[len-i-1];
    }
    strcpy[len]='\0';
    cout<<"Reversed string:"<<strcpy;
    return 0;
}