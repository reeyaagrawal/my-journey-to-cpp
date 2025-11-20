// Write a program to rotate an array to the left by one position.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in an array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arra[n];
    arra[0]=arr[n-1];
    for(int i=0;i<n-1;i++){
        arra[i+1]=arr[i];
    }
    cout<<"rotated array to the left by one position is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arra[i]<<" ";
    }
    return 0;
}