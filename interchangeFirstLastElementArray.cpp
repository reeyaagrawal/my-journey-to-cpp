// Write a program to interchange the first and last elements of an array.
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
   cout<<"--interchanged ARRAY:--"<<endl;
   int arra[n];
   arra[0]=arr[n-1];
   arra[n-1]=arr[0];
   for(int i=1;i<n-1;i++){
       arra[i]=arr[i];
   }
   for(int i=0;i<n;i++){
       cout<<arra[i]<<" ";
   }
    return 0;
}