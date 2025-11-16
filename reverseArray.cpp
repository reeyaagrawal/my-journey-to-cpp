// Write a program to reverse the elements of an array.
#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"enter no of elements in an array:";
   cin>>n;
   cout<<"enter elements of an array:";
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"--REVERSED ARRAY:--"<<endl;
   int arra[n];
   for(int i=0;i<n;i++){
       arra[i]=arr[n-1-i];
   }
   for(int i=0;i<n;i++){
       cout<<arra[i]<<" ";
   }
    return 0;
}