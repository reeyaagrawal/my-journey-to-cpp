//Write a program to search for an element in an array (Linear Search).
#include <iostream>
using namespace std;
int main() {
   int arr[5];
   int key,n;
   cout<<"enter no of elements:";
   cin>>n;
   cout<<"enter elements:";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"enter element u want to search:";
   cin>>key;
   for(int i=0;i<5;i++){
     if(arr[i]==key){
     cout<<i<<" index"; break;}
     else{ cout<<"-1"; break;}
   }
    return 0;
}