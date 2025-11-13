// Write a program to copy elements of one array into another array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter no of element:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int copy[n];
    for(int i=0;i<n;i++){
        copy[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<copy[i]<<" ";
    }
    return 0;
}