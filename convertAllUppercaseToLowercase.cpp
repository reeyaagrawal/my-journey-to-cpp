// Write a program to convert all uppercase characters in a string to lowercase.
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
       }
   }
   cout<<str;
    return 0;
}