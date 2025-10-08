// Write a program to check whether three sides can form a triangle.
#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"enter 3 sides of triangle: ";
   cin>>a>>b>>c;
   if(a+b>c&&a+c>b&&b+c>a){
       cout<<"3 sides can form  a triangle";
   }else{
       cout<<"3 sides can not form  a triangle";
   }
    return 0;
}