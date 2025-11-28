//Write a program to check whether a  string is palindrome or not (without using library functions).
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
    bool ispal=true;
    for(int i=0;i<len;i++){
       if(strcpy[i]!=str[i]) {
          ispal=false;
          break;
       }
       
    }
    if(ispal){
     cout<<"palindrome";
    }
     else{
     cout<<"not palindrome";
     }
    return 0;
}