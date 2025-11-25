// Write a program to toggle each character of a string (upper → lower, lower → upper)
#include <iostream>
#include<string>
using namespace std;
int main() {
   char str[50];
   cout<<"enter string:";
   cin.getline(str,50);
   for(int i=0;str[i]!='\0';i++){
       if(str[i]>='A' && str[i]<='Z'){
           str[i]=tolower(str[i]);
       }else 
       str[i]=toupper(str[i]);
    }
   cout<<str;
    return 0;
}