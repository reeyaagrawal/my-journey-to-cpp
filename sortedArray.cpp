// Write a program to check if an array is sorted in ascending order.
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
   bool sorted=true;
   for(int i=0;i<n;i++){
      if(arr[i]>arr[i+1]){
           sorted=false;
           break;
       }
   }
  if(sorted){
      cout<<"array is sorted";
  }else{
      cout<<"array is unsorted";
  }
    return 0;
}