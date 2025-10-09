// Write a program to find the smallest of three numbers.

#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"enter 3 numbers: ";
   cin>>a>>b>>c;
   if(a<b&&a<c){
       cout<<a<<" is smallest";
   }else if(b<a&&b<c){
       cout<<b<<" is smallest";
   }else if(c<a&&c<b){
       cout<<c<<" is smallest";
   }
    return 0;
}