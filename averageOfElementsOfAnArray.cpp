// Write a program to find the average of all elements in an array.
#include <iostream>
using namespace std;
int main() {
   int arr[5];
   int sum=0;
   cout<<"enter 5 elements:";
   for(int i=0;i<5;i++){
       cin>>arr[i];
   }
   for(int i=0;i<5;i++){
     sum+=arr[i];
   }
   cout<<"average:"<<sum/5;
    return 0;
}