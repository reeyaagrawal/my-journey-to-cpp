// Write a program to convert all lowercase characters in a string to uppercase.
#include <iostream>
#include<string>
using namespace std;
int main() {
   char str[50];
   cout<<"enter string:";
   cin.getline(str,50);
   for(int i=0;str[i]!='\0';i++){
       if(str[i]>='a' && str[i]<='z'){
           str[i]=toupper(str[i]);
       }
   }
   cout<<str;
    return 0;
}