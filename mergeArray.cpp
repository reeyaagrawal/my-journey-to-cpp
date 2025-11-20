// Write a program to merge two arrays into a third array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements of first array:";
    cin>>n;
    int m;
    cout<<"enter no of elements of second array:";
    cin>>m;
    int arr[n];
    cout<<"enter elements of first array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr1[m];
    cout<<"enter elements of second array:";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int arra[n+m];
    
    for(int i=0;i<n;i++){
        arra[i]=arr[i];
    }
    
    for(int i=0;i<m;i++){
       arra[n+i]=arr1[i];
    }
    cout<<"merged array:";
    for(int i=0;i<n+m;i++){
       cout<<arra[i]<<" ";
    }
    return 0;
}