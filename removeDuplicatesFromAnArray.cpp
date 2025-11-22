// Write a program to remove duplicate elements from an array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter no of elements in an array;";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;){
         if(arr[i]==arr[j]){
             for(int k=j;k<n-1;k++){
                 arr[k]=arr[k+1];
                
             }
              n--;
         }else{
            j++; 
         }
        }
    }
    cout<<"array after removing all duplicates:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}