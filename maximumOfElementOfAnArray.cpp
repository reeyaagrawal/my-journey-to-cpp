// Write a program to find the maximum of all elements in an array.
#include <iostream>
using namespace std;
int main() {
   int arr[5];
   
   cout<<"enter 5 elements:";
   for(int i=0;i<5;i++){
       cin>>arr[i];
   }
   int max=arr[0];
   for(int i=1;i<5;i++){
     if(arr[i]>max)
     max=arr[i];
   }
   cout<<"maximum:"<<max;
    return 0;
}